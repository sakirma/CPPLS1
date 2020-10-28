#include "Concatenation.h"

void Concatenation::Execute(Operation_data data)
{
	string firstString = Pop_stack(data.stack_);
	string secondString = Pop_stack(data.stack_);
	

	string catString = secondString + firstString;

	data.stack_.push_back(catString);
}
