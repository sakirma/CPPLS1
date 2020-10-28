#pragma once
#include "Operation.h"
class GLT : public Operation
{
public:
	~GLT() override
	{
		
	}
	
	void Execute(Operation_data data) override;
};

