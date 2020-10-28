#pragma once
#include "Operation.h"
class Endline :
    public Operation
{
public:
	~Endline() override
	{
		
	}
	void Execute(Operation_data data) override;
};

