#pragma once
#include "Operation.h"

class LabelReference : public Operation
{
public:
	~LabelReference() override
	{
		
	}
	void Execute(OperationData data) override;
};

