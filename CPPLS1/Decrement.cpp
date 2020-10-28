#include "Decrement.h"

void Decrement::Execute(Operation_data data)
{
	const int new_value = stoi(Pop_stack(data.stack_)) - 1;

	data.stack_.push_back(to_string(new_value));
}
