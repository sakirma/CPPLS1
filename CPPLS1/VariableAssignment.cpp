#include "VariableAssignment.h"

void VariableAssignment::Execute(OperationData data)
{
	data.line.erase(0, 1);
	
	string value = data.stack.back();
	data.stack.pop_back();

	data.variables.insert(pair<string, string>(data.line, value));
}
