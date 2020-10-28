#include "Indexing.h"

void Indexing::Execute(Operation_data data)
{
	const int index = stoi(Pop_stack(data.stack_));
	const string stack_value = Pop_stack(data.stack_);

	const string new_value = string(1, stack_value[index]);

	data.stack_.push_back(new_value);
}
