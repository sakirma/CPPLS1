#pragma once
#include "Operation.h"

class GGE : public Operation
{
public:
	~GGE()
	{
		
	};
	void Execute(Operation_data data) override;
};
