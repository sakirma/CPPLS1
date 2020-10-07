#include "Number.h"

Number::~Number()
{
}

void Number::Execute(OperationData data)
{
	data.stack.push_back(data.line);
}
