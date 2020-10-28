#include "VariableAssignment.h"

void VariableAssignment::Execute(Operation_data data)
{
	data.line.erase(0, 1);
	
	string value = Pop_stack(data.stack_);

	data.variables_.insert_or_assign(data.line, value);
}
