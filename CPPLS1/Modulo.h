#pragma once
#include "Operation.h"
class Modulo : public Operation
{
public:
	~Modulo()
	{
		
	}
	
	void Execute(Operation_data data) override;
};

