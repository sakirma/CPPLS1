#pragma once
#include <map>
#include <string>

#include "Operation.h"
#include "Backslash.h"
#include "Concatenation.h"
#include "Decrement.h"
#include "Number.h"
#include "LabelDefinition.h"
#include "VariableAssignment.h"
#include "VariableReference.h"

#include "Duplicate.h"
#include "GNE.h"
#include "LabelReference.h"

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
		factory.insert(pair<string, VariableReference*>("$", new VariableReference()));
		factory.insert(pair<string, LabelDefinition*>(":", new LabelDefinition()));
		factory.insert(pair<string, LabelReference*>(">", new LabelReference()));
		factory.insert(pair<string, Number*>("number", new Number()));

		factory.insert(pair<string, Duplicate*>("dup", new Duplicate()));
		factory.insert(pair<string, Concatenation*>("cat", new Concatenation()));
		factory.insert(pair<string, Decrement*>("dec", new Decrement()));

		factory.insert(pair<string, GNE*>("gne", new GNE()));
	}

	map<string, Operation*> factory;
};
