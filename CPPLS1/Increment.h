#pragma once
#include "Operation.h"
class Increment : public Operation
{
public:
	~Increment() override
	{
		
	}
	
	void Execute(Operation_data data) override;
};

