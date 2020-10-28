#pragma once
#include "Operation.h"
class Length : public Operation
{
public:
	~Length() override
	{
		
	}
	
	void Execute(Operation_data data) override;
};

