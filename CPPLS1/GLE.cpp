#include "GLE.h"

void GLE::Execute(Operation_data data)
{
	const int label_value = stoi(Pop_stack(data.stack_));
	const int val2 = stoi(Pop_stack(data.stack_));
	const int val1 = stoi(Pop_stack(data.stack_));

	if(val1 <= val2)
	{
		data.position_ = label_value;
	}
}
