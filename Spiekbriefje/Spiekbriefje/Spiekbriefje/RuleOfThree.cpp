#include "RuleOfThree.h"

// Rule of Three is:
//1. Destructor
//2. Copy constructor
//3. Copy assignment operator  // https://www.geeksforgeeks.org/copy-constructor-vs-assignment-operator-in-c/

RuleOfThree::RuleOfThree(int* pointer, int size)
{
	IntPointer = pointer;
	Size = size;
}

RuleOfThree::~RuleOfThree() // Destructor
{
	delete IntPointer;
	IntPointer = nullptr; // <-- best practise 
}

RuleOfThree::RuleOfThree(const RuleOfThree& r) // Copy constructor
{
	IntPointer = r.IntPointer;
	Size = r.Size;
}

RuleOfThree& RuleOfThree::operator=(const RuleOfThree& r) // Copy assignment operator
{
	IntPointer = r.IntPointer;
	Size = r.Size;
	return *this;
}
