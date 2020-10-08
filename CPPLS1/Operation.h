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

protected:
	string PopStack(vector<string>& stack) const
	{
		string value = stack.back();
		stack.pop_back();
		return value;
	}
};

struct OperationData
{
	OperationData(unsigned int& position, vector<string>& stack, map<string, string>& variables, map<string, int>& label)
		: position(position),
		  stack(stack),
		  variables(variables),
		  label(label)
	{
	}

	string line;
	unsigned int& position;
	vector<string>& stack;
	map<string, string>& variables;
	map<string, int>& label;
};
