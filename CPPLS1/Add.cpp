#include "Add.h"

void Add::Execute(Operation_data data)
{
	const int value1 = stoi(Pop_stack(data.stack_));
	const int value2 = stoi(Pop_stack(data.stack_));

	const string new_value = to_string(value1 + value2);

	data.stack_.push_back(new_value);
}
