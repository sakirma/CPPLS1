// CPPLS1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <vector>

#include "curl/curl.h"
#include "OperationFactory.h"
#include "CurlReader.h"

using namespace std;


int main(int argc, char* argv[])
{
	const CurlReader curlReader = CurlReader();
	string nextKey = curlReader.GetNextUrl("start.txt");
	
	return 0;
}




// https://www.swiftcoder.nl/cpp1/start.txt