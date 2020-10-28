#include "Absolute.h"

void Absolute::Execute(Operation_data data)
{
	const int value = stoi(Pop_stack(data.stack_));

	data.stack_.push_back(to_string(abs(value)));
}
