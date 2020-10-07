#pragma once
#include <map>

#include "Operation.h"

class Number : public Operation
{
public:
	~Number() override
	{
		
	}
	
	void Execute(OperationData data) override;
};
