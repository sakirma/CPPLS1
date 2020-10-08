#pragma once
#include "Operation.h"

class Decrement : public Operation
{
public:
	~Decrement() override
	{
		
	}
	void Execute(OperationData data) override;
};

