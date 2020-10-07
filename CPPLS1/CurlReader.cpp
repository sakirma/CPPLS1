#include "CurlReader.h"
#include "OperationFactory.h"

const string CurlReader::URL = "https://www.swiftcoder.nl/cpp1/";

size_t CurlReader::WriteCallback(void* contents, const size_t size, size_t nmemb, void* userp)
{
	static_cast<string*>(userp)->append(static_cast<char*>(contents), size * nmemb);

	return size * nmemb;
}

string CurlReader::GetNextUrl(string key) const
{
	string readBuffer;
	vector<string> readData;

	curl_global_init(CURL_GLOBAL_DEFAULT);


	CURL* curl = curl_easy_init();
	if (curl)
	{
		curl_easy_setopt(curl, CURLOPT_URL, (URL + key).c_str());
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);


		const CURLcode res = curl_easy_perform(curl);
		if (res != CURLE_OK)
		{
			fprintf(stderr, "curl_easy_operation() failed : %s\n", curl_easy_strerror(res));
		}
		else
		{
			stringstream ss(readBuffer);
			string to;
			while (getline(ss, to, '\n'))
			{
				std::cout << to << std::endl;

				readData.push_back(to);
			}
		}
	}
	curl_easy_cleanup(curl);

	
	return IterateStack(readData);
}


string CurlReader::IterateStack(vector<string>& readData) const
{
	OperationFactory& operationFactory = OperationFactory::GetInstance();

	vector<string> stack = vector<string>();
	map<string, string> variables = map<string, string>();
	map<string, int> labels = map<string, int>();

	OperationData data = OperationData(stack, variables, labels);
	
	while (data.position <= readData.size())
	{
		data.line = readData[data.position];
		
		Operation* op = operationFactory.Get(data.line);
		op->Execute(data);

		data.position++;
	}

	
	return "";
}

