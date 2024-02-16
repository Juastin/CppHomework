#pragma once
#include "MySuperClass.h";
#include <iostream>
#include <sstream>

//polymorphism
class MyClass: public MySuperClass{
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

