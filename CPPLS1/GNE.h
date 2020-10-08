#pragma once
#include "Operation.h"

class GNE : public Operation
{
public:
	~GNE() override
	{
		
	}
	
	void Execute(OperationData data) override;
};

