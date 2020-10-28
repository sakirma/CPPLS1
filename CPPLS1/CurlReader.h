#pragma once

#include <string>
#include <ostream>
#include <vector>

struct Operation_data;
using namespace std;

class Curl_reader
{
public:
	string Get_next_url(std::string key);
private:
	const std::string url_ = "https://www.swiftcoder.nl/cpp1/";
	static size_t Write_callback(void* contents, const size_t size, size_t nmemb, void* userp);

	
	string Iterate_stack(const vector<string>& read_data);
	void Find_labels(const vector<string>& read_data, Operation_data& data) const;

	bool end_line_found_ = false;
};
