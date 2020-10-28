#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW
#endif

#include <iostream>

#include "CurlReader.h"
#include "OperationFactory.h"


int main(int argc, char* argv[])
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	// _CrtSetBreakAlloc(321);
	// _CrtSetBreakAlloc(320);
	// _CrtSetBreakAlloc(319);
	Curl_reader curl_reader = Curl_reader();
	try
	{
		curl_reader.Get_next_url("start.txt");
	}
	catch (const exception& e)
	{
		cout << e.what() << endl;
	}
	catch (...)
	{
		cout << "Oops, something went wrong" << endl;
	}

	Operation_factory::Get_instance()->Destroy_factory();
	return 0;
}




// https://www.swiftcoder.nl/cpp1/start.txt