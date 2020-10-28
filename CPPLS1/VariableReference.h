#pragma once
#include "Operation.h"

class VariableReference : public Operation
{
public:
	~VariableReference() override
	{
		
	}
	
	void Execute(Operation_data data) override;
};

