#include "Duplicate.h"

void Duplicate::Execute(OperationData data)
{
	string dubString = data.stack.back();

	data.stack.push_back(dubString);
}
