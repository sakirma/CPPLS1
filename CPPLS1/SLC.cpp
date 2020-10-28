#include "SLC.h"

void SLC::Execute(Operation_data data)
{
	int to = stoi(Pop_stack(data.stack_));
	const int from = stoi(Pop_stack(data.stack_));

	const string value = Pop_stack(data.stack_);

	const string new_value = value.substr(from, to - from);

	data.stack_.push_back(new_value);
}