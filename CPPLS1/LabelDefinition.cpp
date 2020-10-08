#include "LabelDefinition.h"


void LabelDefinition::Execute(OperationData data)
{
	data.label.insert(pair<string, int>(data.line.erase(0, 1), data.position));
}