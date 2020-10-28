#include "Duplicate.h"

void Duplicate::Execute(Operation_data data)
{
	const string dub_string = data.stack_.back();

	data.stack_.push_back(dub_string);
}
