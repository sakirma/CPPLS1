#include "VariableReference.h"

void VariableReference::Execute(OperationData data)
{
	data.line.erase(0, 1);
	
	string variableName = data.variables.at(data.line);
	data.variables.erase(data.line);

	data.stack.push_back(variableName);
}
