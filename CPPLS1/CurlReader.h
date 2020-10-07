#pragma once
#include <string>
#include <iostream>
#include <ostream>
#include <sstream>
#include <vector>
#include <curl/curl.h>

using namespace std;

class CurlReader
{
public:
	string GetNextUrl(std::string key) const;
private:
	static const std::string URL;
	static size_t WriteCallback(void* contents, const size_t size, size_t nmemb, void* userp);

	string IterateStack(vector<string> &readData) const;
};
