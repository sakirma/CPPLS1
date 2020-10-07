#pragma once
#include <map>
#include <string>

#include "Operation.h"
#include "Backslash.h"
#include "Number.h"
#include "VariableAssignment.h"

using namespace std;

class OperationFactory
{
public:
	static OperationFactory& GetInstance() { return instance_; }

	// prohibit copy & move
	OperationFactory(const OperationFactory&) = delete;
	OperationFactory(OperationFactory&&) = delete;
	OperationFactory& operator=(const OperationFactory&) = delete;
	OperationFactory& operator=(OperationFactory&&) = delete;

	Operation* Get(string input);

private:
	static OperationFactory instance_;

	OperationFactory()
	{
		factory.insert(pair<string, BackSlash*>("\\", new BackSlash()));
		factory.insert(pair<string, VariableAssignment*>("=", new VariableAssignment()));
		factory.insert(pair<string, Number*>("number", new Number()));
	}

	map<string, Operation*> factory;
};
