#pragma once
// Rule of Three is:
//1. destructor
//2. copy constructor
//3. copy assignment operator

class RuleOfThree
{
private:
	int* IntPointer;
	int Size;

public:
	RuleOfThree(int*, int);
	~RuleOfThree(); // Destructor
	RuleOfThree(const RuleOfThree &r); // Copy constructor
	RuleOfThree& operator=(const RuleOfThree& t); // Copy assignment operator
};

