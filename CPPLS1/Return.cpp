#include "Return.h"

void Return::Execute(Operation_data data)
{
	const int position = Pop_stack(data.func_);

	data.position_ = position;
}
