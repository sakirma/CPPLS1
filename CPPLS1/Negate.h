#pragma once
#include "Operation.h"
class Negate : public Operation
{
public:
	~Negate() override
	{
		
	}
	
	void Execute(Operation_data data) override;
};

