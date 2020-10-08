#pragma once
#include "Operation.h"

class VariableReference : public Operation
{
public:
	~VariableReference() override
	{
		
	}
	
	void Execute(OperationData data) override;
};

