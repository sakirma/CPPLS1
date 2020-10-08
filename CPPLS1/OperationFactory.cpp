#include "OperationFactory.h"

OperationFactory OperationFactory::instance_;

Operation* OperationFactory::Get(string input)
{
	char firstC = input[0];

	if (isdigit(firstC))
	{
		return factory.at("number");
	}

	if (firstC == '\\' || firstC == '=' || firstC == '$' || firstC == ':' || firstC == '>')
	{
		return factory.at(string(1, input[0]));
	}

	return factory.at(input);
}
