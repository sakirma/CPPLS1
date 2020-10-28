#pragma once
#include "Operation.h"

class Absolute : public Operation
{
public:
	~Absolute()
	{
		
	}
	void Execute(Operation_data data) override;
};

