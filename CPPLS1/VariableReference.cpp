#include "VariableReference.h"

void VariableReference::Execute(Operation_data data)
{
	const string label_name = data.line.erase(0, 1);

	const string variable_name = data.variables_.at(label_name);

	data.stack_.push_back(variable_name);
}
