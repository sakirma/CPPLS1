#include "SaveLabel.h"


void SaveLabel::Execute(OperationData data)
{
	data.label.insert(pair<string, int>(data.line, data.position));
}