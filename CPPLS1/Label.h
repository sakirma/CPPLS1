#pragma once
#include <map>

#include "Operation.h"

class Label : public Operation
{
public:
	~Label() override
	{
		
	}
	
	void Execute(OperationData data) override;
};

