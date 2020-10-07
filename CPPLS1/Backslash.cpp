#include "Backslash.h"

using namespace std;

void BackSlash::Execute(OperationData data)
{
	data.line.erase(0, 1);
	data.stack.push_back(data.line);
}
