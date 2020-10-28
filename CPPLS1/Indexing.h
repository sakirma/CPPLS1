#pragma once
#include "Operation.h"
class Indexing : public Operation
{
public:
	~Indexing() override
	{
		
	}
	
	void Execute(Operation_data data) override;
};

