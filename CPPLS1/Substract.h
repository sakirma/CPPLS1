#pragma once
#include "Operation.h"
class Substract : public Operation
{
public:
	~Substract() override
	{
		
	}
	
	void Execute(Operation_data data) override;
};

