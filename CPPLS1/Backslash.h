#pragma once

#include <map>

#include "Operation.h"
#include <string>
#include <vector>

class BackSlash : public Operation
{
public:
	~BackSlash() override
	{
	}

	void Execute(OperationData data) override;
};
