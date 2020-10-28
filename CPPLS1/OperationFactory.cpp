#include "OperationFactory.h"


Operation_factory* Operation_factory::singleton_ = nullptr;

Operation_factory*  Operation_factory::Get_instance()
{
	if(singleton_ == nullptr)
	{
		singleton_ = new Operation_factory();
	}

	return singleton_;
}

Operation* Operation_factory::Get(string input)
{
	const char first_c = input[0];

	if (isdigit(first_c))
	{
		return factory_.at("number");
	}

	if(factory_.count(string(1, first_c)) != 0)
	{
		return factory_.at(string(1, input[0]));
	}

	return factory_.at(input);
}
