#include "Backslash.h"

using namespace std;

void BackSlash::Execute(Operation_data data)
{
	data.line.erase(0, 1);
	data.stack_.push_back(data.line);
}
