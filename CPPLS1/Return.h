#pragma once
#include "Operation.h"
class Return : public Operation
{
public:
	~Return() override
	{
		
	}
	
	void Execute(Operation_data data) override;
};

