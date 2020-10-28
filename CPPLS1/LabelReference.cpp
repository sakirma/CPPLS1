#include "LabelReference.h"

void LabelReference::Execute(Operation_data data)
{
	string labelName = data.line.erase(0, 1);
	int labelValue = data.label_[labelName];
	
	data.stack_.push_back(to_string(labelValue));
}
