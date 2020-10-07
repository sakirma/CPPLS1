#include "VariableAssignment.h"

void VariableAssignment::Execute(OperationData data)
{
	data.line.erase(0, 1);
	
	string value;
	for (string& i : data.stack)
	{
		value += i;
	}
	
	data.stack.clear();

	data.variables.insert(pair<string, string>(data.line, value));
}
