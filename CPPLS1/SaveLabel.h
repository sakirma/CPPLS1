#pragma once
#include <map>

#include "Operation.h"

class SaveLabel : public Operation
{
public:
	~SaveLabel() override
	{
		
	}
	
	void Execute(OperationData data) override;
};

