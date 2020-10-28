#pragma once
#include "Operation.h"
class SLC : public Operation
{
public:
	~SLC() override
	{
		
	}
	
	void Execute(Operation_data data) override;
};

