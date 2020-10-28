#pragma once
#include <curl/curl.h>

class Curl_wrapper
{
public:
	Curl_wrapper()
	{
		curl_ = curl_easy_init();
	}

	~Curl_wrapper()
	{
		curl_easy_cleanup(curl_);
	}

	inline CURL* Get_curl() const { return curl_; }
	
private:
	CURL* curl_;
};