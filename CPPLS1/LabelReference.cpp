#include "LabelReference.h"

void LabelReference::Execute(OperationData data)
{
	data.stack.push_back(to_string(data.label[data.line.erase(0, 1)]));
}
