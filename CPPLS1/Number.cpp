#include "Number.h"

void Number::Execute(OperationData data)
{
	data.stack.push_back(data.line);
}
