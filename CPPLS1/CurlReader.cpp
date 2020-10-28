#include "CurlReader.h"

#include <iostream>
#include <sstream>
#include <curl/curl.h>



#include "CurlWrapper.h"
#include "OperationFactory.h"

size_t Curl_reader::Write_callback(void* contents, const size_t size, size_t nmemb, void* userp)
{
	static_cast<string*>(userp)->append(static_cast<char*>(contents), size * nmemb);

	return size * nmemb;
}



string Curl_reader::Get_next_url(const string key)
{
	string read_buffer;
	vector<string> raw_data;

	curl_global_init(CURL_GLOBAL_DEFAULT);

	const Curl_wrapper curl_wrapper;
	CURL* curl = curl_wrapper.Get_curl();
	if (curl != nullptr)
	{
		curl_easy_setopt(curl, CURLOPT_URL, (url_ + key).c_str());
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, Write_callback);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &read_buffer);
		curl_easy_setopt(curl, CURLOPT_VERBOSE, 0);
		curl_easy_setopt(curl, CURLOPT_FAILONERROR, true);


		const CURLcode res = curl_easy_perform(curl);
		if (res != CURLE_OK)
		{
			fprintf(stderr, "curl_easy_operation() failed : %s\n", curl_easy_strerror(res));
			cout << "Something went wrong with the URL" << endl;
			return "";
		}

		stringstream ss(read_buffer);
		string to;
		while (getline(ss, to, '\n'))
		{
			raw_data.push_back(to);
		}
	}

	string new_url = Iterate_stack(raw_data);
	
	if(!end_line_found_)
	{
		return Get_next_url(new_url);
	}

	return new_url;
}


string Curl_reader::Iterate_stack(const vector<string>& read_data)
{
	Operation_factory* operation_factory = Operation_factory::Get_instance();

	vector<string> stack = vector<string>();
	vector<int> call_stack = vector<int>();
	map<string, string> variables = map<string, string>();
	map<string, int> labels = map<string, int>();
	vector<int> func = vector<int>();
	unsigned int position = 0;

	Operation_data data = Operation_data(position, stack, variables, labels, func);

	Find_labels(read_data, data);
	cout << "=============================================" << endl;
	while (position < read_data.size())
	{
		data.line = read_data[position];

		if (data.line == "end")
		{
			end_line_found_ = true;
			break;
		}

		Operation* op = operation_factory->Get(data.line);
		op->Execute(data);


		position++;
	}

	cout << stack.back() << endl;
	return stack.back();
}

void Curl_reader::Find_labels(const vector<string>& read_data, Operation_data& data) const
{
	LabelDefinition* label_definition = dynamic_cast<LabelDefinition*>(Operation_factory::Get_instance()->Get(":"));

	unsigned& position = data.position_;
	while (position < read_data.size())
	{
		string line = data.line = read_data[position];

		if (line[0] == ':')
		{
			label_definition->Execute(data);
		}

		position++;
	}
	position = 0;
}