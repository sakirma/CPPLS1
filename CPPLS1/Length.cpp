#include "Length.h"

void Length::Execute(Operation_data data)
{
	const string stack_value = Pop_stack(data.stack_);

	const string new_value = to_string(stack_value.length());

	data.stack_.push_back(new_value);
}
