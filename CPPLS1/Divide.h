#pragma once
#include "Operation.h"
class Divide : public Operation
{
public:
	~Divide() override
	{
		
	}
	
	void Execute(Operation_data data) override;
};

