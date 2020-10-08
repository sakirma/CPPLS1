#include "GNE.h"

void GNE::Execute(OperationData data)
{
	const unsigned int labelValue = stoi(PopStack(data.stack));
	const int val1 = stoi(PopStack(data.stack));
	const int val2 = stoi(PopStack(data.stack));

	if(val1 != val2)
	{
		data.position = labelValue;
	}
}
