#include "Endline.h"

void Endline::Execute(Operation_data data)
{
	string value = Pop_stack(data.stack_);

	value += '\n';

	data.stack_.push_back(value);
}