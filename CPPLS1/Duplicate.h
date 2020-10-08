#pragma once
#include "Operation.h"

class Duplicate : public Operation
{
public:
	~Duplicate() override
	{
		
	}
	void Execute(OperationData data) override;
};

