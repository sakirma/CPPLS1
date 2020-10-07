#pragma once

#include <map>
#include "Operation.h"


class VariableAssignment : public Operation
{
public:
	~VariableAssignment() override
	{
	}

	void Execute(OperationData data) override;
};
