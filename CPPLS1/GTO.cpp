#include "GTO.h"

void GTO::Execute(Operation_data data)
{
	const int next_position = stoi(Pop_stack(data.stack_));

	data.position_ = next_position;
}
