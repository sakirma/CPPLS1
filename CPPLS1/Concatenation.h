#pragma once
#include "Operation.h"

class Concatenation : public Operation
{
public:
	~Concatenation() override
	{
		
	}
	
	void Execute(Operation_data data) override;
};

