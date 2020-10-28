#pragma once

#include <map>
#include "Operation.h"


class VariableAssignment : public Operation
{
public:
	~VariableAssignment() override
	{
	}

	void Execute(Operation_data data) override;
};
