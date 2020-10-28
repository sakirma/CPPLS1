#pragma once
#include <map>
#include <string>



#include "Absolute.h"
#include "Add.h"
#include "Operation.h"
#include "Backslash.h"
#include "Concatenation.h"
#include "Decrement.h"
#include "Divide.h"
#include "Number.h"
#include "LabelDefinition.h"
#include "VariableAssignment.h"
#include "VariableReference.h"

#include "Duplicate.h"
#include "Endline.h"
#include "FUN.h"
#include "GGE.h"
#include "GGT.h"
#include "GLE.h"
#include "GLT.h"
#include "GNE.h"
#include "GTO.h"
#include "Increment.h"
#include "Indexing.h"
#include "LabelReference.h"
#include "Length.h"
#include "Modulo.h"
#include "Multiply.h"
#include "Negate.h"
#include "Return.h"
#include "Reverse.h"
#include "Rotate.h"
#include "SLC.h"
#include "Substract.h"

using namespace std;

class Operation_factory
{
public:
	static Operation_factory* Get_instance();

	// prohibit copy & move

	Operation* Get(string input);
	void Destroy_factory()
	{
		for (auto it = factory_.begin(); it != factory_.end();) {
			delete it->second;
			it = factory_.erase(it);
		}
	}

	Operation_factory(Operation_factory& other) = delete;

	void operator=(const Operation_factory&) = delete;
	

protected:
	Operation_factory()
	{
		factory_.insert(pair<string, BackSlash*>("\\", new BackSlash()));
		factory_.insert(pair<string, VariableAssignment*>("=", new VariableAssignment()));
		factory_.insert(pair<string, VariableReference*>("$", new VariableReference()));
		factory_.insert(pair<string, LabelDefinition*>(":", new LabelDefinition()));
		factory_.insert(pair<string, LabelReference*>(">", new LabelReference()));
		factory_.insert(pair<string, Number*>("number", new Number()));

		factory_.insert(pair<string, Duplicate*>("dup", new Duplicate()));
		factory_.insert(pair<string, Concatenation*>("cat", new Concatenation()));
		factory_.insert(pair<string, Decrement*>("dec", new Decrement()));
		factory_.insert(pair<string, Modulo*>("mod", new Modulo()));
		factory_.insert(pair<string, Multiply*>("mul", new Multiply()));
		factory_.insert(pair<string, Reverse*>("rev", new Reverse()));
		factory_.insert(pair<string, Divide*>("div", new Divide()));
		factory_.insert(pair<string, Length*>("len", new Length()));
		factory_.insert(pair<string, Indexing*>("idx", new Indexing()));
		factory_.insert(pair<string, Add*>("add", new Add()));
		factory_.insert(pair<string, SLC*>("slc", new SLC()));
		factory_.insert(pair<string, Increment*>("inc", new Increment()));
		factory_.insert(pair<string, Substract*>("sub", new Substract()));
		factory_.insert(pair<string, Negate*>("neg", new Negate()));
		factory_.insert(pair<string, Absolute*>("abs", new Absolute()));
		factory_.insert(pair<string, Rotate*>("rot", new Rotate()));
		
		GTO* gto = new GTO();
		factory_.insert(pair<string, GTO*>("gto", gto));
		factory_.insert(pair<string, GNE*>("gne", new GNE()));
		factory_.insert(pair<string, GGE*>("gge", new GGE()));
		factory_.insert(pair<string, GLE*>("gle", new GLE()));
		factory_.insert(pair<string, GLT*>("glt", new GLT()));
		factory_.insert(pair<string, GGT*>("ggt", new GGT()));

		factory_.insert(pair<string, FUN*>("fun", new FUN(*gto)));
		factory_.insert(pair<string, Return*>("ret", new Return()));


		factory_.insert(pair<string, Endline*>("enl", new Endline()));
	}

	static Operation_factory* singleton_;

	
	map<string, Operation*> factory_;
};
