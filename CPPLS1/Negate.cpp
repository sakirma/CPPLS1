#include "Negate.h"

void Negate::Execute(Operation_data data)
{
	const int value = stoi(Pop_stack(data.stack_));

	const string new_value = to_string(value * -1);

	data.stack_.push_back(new_value);
}
