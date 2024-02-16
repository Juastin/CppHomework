#include "Lecture4.h"
#include "MySuperClass.h"
#include "MyClass.h"
void Main() {
	MyClass c;
	c.doIt();

	//by naming the function to become virtual the output will be
	//this is myClass instead of this is mySuperClass
	MySuperClass sc;
	sc = c;
	sc.doIt();

	/*
		a class or function becomes abstract,
		when one or more ar virtual
		it is not defined by the word abstract
		but by if a function is virtual
	*/
}