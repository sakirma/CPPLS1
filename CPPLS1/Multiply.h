#pragma once
#include "Operation.h"
class Multiply : public Operation
{
public:
	~Multiply()
	{
		
	}
	
	void Execute(Operation_data data) override;
};

