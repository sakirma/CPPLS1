#pragma once

#include <vector>
#include <string>
#include <map>

struct OperationData;
using namespace std;

class Operation
{
public:
	virtual ~Operation() = default;
	virtual void Execute(OperationData data) = 0;
};

struct OperationData
{
	OperationData(vector<string>& stack, map<string, string>& variables, map<string, int>& label)
		: stack(stack),
		  variables(variables),
		  label(label)
	{
	}

	unsigned int position = 0;
	string line;
	vector<string>& stack;
	map<string, string>& variables;
	map<string, int>& label;
};