#pragma once

#include <vector>
#include <string>
#include <map>

struct Operation_data;
using namespace std;

class Operation
{
public:
	virtual ~Operation() = default;
	virtual void Execute(Operation_data data) = 0;

protected:
	template <typename T>
	T Pop_stack(vector<T>& stack) const
	{
		T value = stack.back();
		stack.pop_back();
		return value;
	}
};

struct Operation_data
{
	Operation_data(unsigned int& position, vector<string>& stack,
	              map<string, string>& variables,
	              map<string, int>& label, vector<int>& func)
		: position_(position),
		  stack_(stack),
		  variables_(variables),
		  label_(label),
		  func_(func)
	{
	}

	string line;
	unsigned int& position_;
	vector<string>& stack_;
	map<string, string>& variables_;
	map<string, int>& label_;
	vector<int>& func_;
};
