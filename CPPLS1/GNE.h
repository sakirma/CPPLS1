#pragma once
#include "Operation.h"

class GNE : public Operation
{
public:
	~GNE() override
	{
		
	}
	
	void Execute(Operation_data data) override;
};

