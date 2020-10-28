#include "Increment.h"

void Increment::Execute(Operation_data data)
{
	const int value = stoi(Pop_stack(data.stack_)) + 1;

	data.stack_.push_back(to_string(value));
}
