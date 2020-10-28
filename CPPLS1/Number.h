#pragma once
#include <map>

#include "Operation.h"

class Number : public Operation
{
public:
	~Number() override
	{
		
	}
	
	void Execute(Operation_data data) override;
};
