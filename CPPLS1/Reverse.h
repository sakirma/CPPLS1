#pragma once
#include "Operation.h"
class Reverse : public Operation
{
public:
	~Reverse() override
	{
		
	}
	
	void Execute(Operation_data data) override;
};

