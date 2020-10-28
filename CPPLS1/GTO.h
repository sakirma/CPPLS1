#pragma once
#include "Operation.h"

class GTO : public Operation
{
public:
	~GTO()
	{
		
	}

	void Execute(Operation_data data) override;
};

