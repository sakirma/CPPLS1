#include "OperationFactory.h"

OperationFactory OperationFactory::instance_;

Operation* OperationFactory::Get(string input)
{
	if(isdigit(input[0]))
	{
		return factory.at("number");
	}

	if(input[0] == '\\' || input[0] == '=')
	{
		return factory.at(string(1, input[0]));
	}

	return factory.at(input);
}

