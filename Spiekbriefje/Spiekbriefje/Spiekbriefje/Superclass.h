#pragma once
#include "String.h"
#include <iostream>
#include <sstream>

class SmallString : public String // Inheritence 
{

};
class MySuperClass
{
public:
	virtual void doIt(); // the virtual keyword basically means it can be overwritten.
						 // To create an abstract class, it only needs one virtual method.
};

class MyClass : public MySuperClass {
	//class MyClass{
private:
	int x;
public:
	MyClass();
	MyClass(int);
	~MyClass();
	void twoTimes();
	void doIt();
	std::string toString();
};


