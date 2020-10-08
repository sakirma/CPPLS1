#include "VariableReference.h"

void VariableReference::Execute(OperationData data)
{
	string labelName = data.line.erase(0, 1);
	
	string variableName = data.variables.at(labelName);

	data.stack.push_back(variableName);
}
