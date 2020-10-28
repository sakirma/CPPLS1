#pragma once
#include "Operation.h"

class LabelReference : public Operation
{
public:
	~LabelReference() override
	{
		
	}
	void Execute(Operation_data data) override;
	bool LabelExists(Operation_data data, string labelName);
};

