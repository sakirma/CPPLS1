#include "FUN.h"

void FUN::Execute(Operation_data data)
{
	data.func_.push_back(data.position_);

	gto_.Execute(data);
}
