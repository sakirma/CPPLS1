#include "Multiply.h"

void Multiply::Execute(Operation_data data)
{
	const int val1 = stoi(Pop_stack(data.stack_));
	const int val2 = stoi(Pop_stack(data.stack_));

	const string new_value = to_string(val1 * val2);

	data.stack_.push_back(new_value);
}