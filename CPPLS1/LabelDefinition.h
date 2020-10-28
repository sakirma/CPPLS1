#pragma once
#include <map>

#include "Operation.h"

class LabelDefinition : public Operation
{
public:
	~LabelDefinition() override
	{
		
	}
	
	void Execute(Operation_data data) override;
};

