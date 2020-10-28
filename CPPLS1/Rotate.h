#pragma once
#include "Operation.h"
class Rotate :
    public Operation
{
public:
	~Rotate()
	{
		
	}
	void Execute(Operation_data data) override;
	std::string crypt(std::string a);
};

