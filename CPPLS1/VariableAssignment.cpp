#include "VariableAssignment.h"

void VariableAssignment::Execute(OperationData data)
{
	data.line.erase(0, 1);
	
	string value = PopStack(data.stack);

	data.variables.insert_or_assign(data.line, value);
}
