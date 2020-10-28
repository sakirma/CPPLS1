#include "LabelDefinition.h"


void LabelDefinition::Execute(Operation_data data)
{
	const string labelName = data.line.erase(0, 1);
	data.label_.insert_or_assign(labelName, data.position_);
}