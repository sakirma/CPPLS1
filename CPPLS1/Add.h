#pragma once
#include "Operation.h"
class Add : public Operation
{
public:
	~Add() override
	{
		
	}
	void Execute(Operation_data data) override;
};

