#include "Modulo.h"

void Modulo::Execute(Operation_data data)
{
	const int value1 = stoi(Pop_stack(data.stack_));
	const int value2 = stoi(Pop_stack(data.stack_));

	const string mod = to_string(value2 % value1);

	data.stack_.push_back(mod);
}
