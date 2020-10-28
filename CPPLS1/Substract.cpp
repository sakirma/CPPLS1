#include "Substract.h"

void Substract::Execute(Operation_data data)
{
	const int val1 = stoi(Pop_stack(data.stack_));
	const int val2 = stoi(Pop_stack(data.stack_));

	const string new_value = to_string(val2 - val1);
	
	data.stack_.push_back(new_value);
}
