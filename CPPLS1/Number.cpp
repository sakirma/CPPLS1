#include "Number.h"

void Number::Execute(Operation_data data)
{
	data.stack_.push_back(data.line);
}
