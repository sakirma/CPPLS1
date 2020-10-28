#pragma once
#include "Operation.h"
class GLE : public Operation
{
public:
	~GLE()
	{
		
	}

	void Execute(Operation_data data) override;
};

