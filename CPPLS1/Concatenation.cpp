#include "Concatenation.h"

void Concatenation::Execute(OperationData data)
{
	string firstString = PopStack(data.stack);
	string secondString = PopStack(data.stack);
	

	string catString = secondString + firstString;

	data.stack.push_back(catString);
}
