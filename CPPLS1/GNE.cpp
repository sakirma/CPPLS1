#include "GNE.h"

void GNE::Execute(Operation_data data)
{
	const int label_value = stoi(Pop_stack(data.stack_));
	const string val2 = Pop_stack(data.stack_);
	const string val1 = Pop_stack(data.stack_);

	if(val1 != val2)
	{
		data.position_ = label_value;
	}
}
