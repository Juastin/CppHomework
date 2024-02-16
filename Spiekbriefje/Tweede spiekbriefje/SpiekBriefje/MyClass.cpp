#include "myclass.h"

MyClass::MyClass(){}
MyClass::MyClass(int x) {
	this->x = x;
}

MyClass::~MyClass() {
	delete x;
}

void MyClass::twoTimes() {
	x *= 2;
}

void MyClass::doIt() {
	std::cout << "I am MyClass" << std::endl;
}

std::string MyClass::toString() {
	std::ostringstream ostr;
	ostr << x;
	return ostr.str();
}
