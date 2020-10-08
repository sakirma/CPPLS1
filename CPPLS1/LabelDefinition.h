#pragma once
#include <map>

#include "Operation.h"

class LabelDefinition : public Operation
{
public:
	~LabelDefinition() override
	{
		
	}
	
	void Execute(OperationData data) override;
};

