#pragma once
#include "GTO.h"
#include "Operation.h"

class FUN : public Operation
{
public:
	FUN(GTO& gto): gto_(gto) {
		
	}

	~FUN()
	{
		
	}
	
	void Execute(Operation_data data) override;
	
private:
	GTO& gto_;
};

