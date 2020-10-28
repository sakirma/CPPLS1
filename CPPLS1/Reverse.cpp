#include "Reverse.h"

void Reverse::Execute(Operation_data data)
{
	string stack_value = Pop_stack(data.stack_);
	reverse(stack_value.begin(), stack_value.end());

	data.stack_.push_back(stack_value);
}
