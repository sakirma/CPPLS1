#include "Decrement.h"

void Decrement::Execute(OperationData data)
{
	const string stringValue = PopStack(data.stack);

	int intValue = stoi(stringValue);

	intValue--;

	data.stack.push_back(to_string(intValue));
}
