#pragma once

#include "Operation.h"

class BackSlash : public Operation
{
public:
	~BackSlash() override
	{
	}

	void Execute(Operation_data data) override;
};
