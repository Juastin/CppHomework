#include "Lecture3.h"
#include <iostream>
/*
reference operator &
	-returns the actual address of your variable in memory
	-can be used as an alias to a variable

	int x = 3;
	&x returns memory adress of x;

pointers
	int * y;
	- a type that holds a memory adress
	- the type of pointer defines the memory organization
		- only a view on memory
		- through pointer memory can be alterd

		https://www.geeksforgeeks.org/creating-array-of-pointers-in-cpp/
*/
void change_var(int& x) {
	x++;
}

//dynamic array: allocate and deallocate
char* my_string_copy(char* orig) {
	char* copy = new char[strlen(orig) + 1];
	char* p = orig;
	char* q = copy;
	while (*p)
		*q++ = *p++;
	*q = '\0';
	return copy;
}

int main() {
	int x = 3;
	change_var(x);

	//pointers
	int i, j; //integers
	int* p; // points to an integer
	
	i = 13;
	p = &i; //p hols adress of i
	j = *p; // dereferencing

/*
var	address	content
J	15C		13
p	160		16C
	164		131
	168		-12
I	16C		13
	170		4
*/

	int a = 5;
	int b = 8;
	int* p = &a;
	//values: 5,8,5
	std::cout << "Values: " << a << "," << b << "," << *p << std::endl;
	
	//values: 13,8,13
	*p = 13;
	std::cout << "Values: " << a << "," << b << "," << *p << std::endl;

	//values: 8,8,8
	*p = b;
	std::cout << "Values: " << a << "," << b << "," << *p << std::endl;

	//values: 21, 8, 21
	a = 21;
	std::cout << "Values: " << a << "," << b << "," << *p << std::endl;

	//values: 21, 8,8
	p = &b;
	std::cout << "Values: " << a << "," << b << "," << *p << std::endl;

	//dynamic memory allocation
/*
	dynamic memory allocation
	- use new to dynamically allocate memory
		- size of allocated memory is defined by system with sizeof
*/
	int* i = new int(123);
	char* c = new char();
	*c = 42;
	
	std::cout << sizeof(i) << std::endl; //4
	std::cout << sizeof(i) << std::endl;//4
	std::cout << sizeof(c) << std::endl; //4
	std::cout << sizeof(*c) << std::endl;//1
	

	//memory management delete
	// new allocate memory
	// delete deallocate memory

	int* p = new int;
	std::cout << p << std::endl;
	delete p;
	//safe delete;
	p = nullptr;

	//arrays and pointers
	int* t;
	int c[10];
	t = c; //
	c = t;//error cannot be assigned to int[10]

	*c = 12; // a[0] has value 12
	*(c + a) = 4; // a[2] has value 4
	

	//dynamic array: allocate and deallocate
	char s1[] = "hello there";
	char* s2 = my_string_copy(s1);
	std::cout << s2 << std::endl;
	delete s2;
}

//double pointers one voor holding adrres * one for pointing to value
void append(char** dest, const char* src)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	//if dest is nullptr give on index 0 \0
	if (*dest == nullptr)
	{
		*dest = new char[1];
		(*dest)[0] = '\0';
	}

	//size of dest by for upping len
	for (len1 = 0; (*dest)[len1] != '\0'; len1++);

	//size of src by for upping len2
	for (len2 = 0; src[len2] != '\0'; len2++);

	//create new char with len1 + len2 + 1
	char* new_string = new char[len1 + len2 + 1];

	//add everything to new string by going over dest unti len1
	for (unsigned int i = 0; i < len1; i++) {
		//add dest[i] value to newstring
		new_string[i] = (*dest)[i];
	}

	//same as loop above
	for (unsigned int i = 0; i < len2; i++) {
		//newstring len1 +i so nothing is overwritten
		new_string[len1 + i] = src[i];
	}

	//add \0 to end of char array
	new_string[len1 + len2] = '\0';

	//delete dest pointer
	delete[] * dest;

	//overwrite value and add new adres to dest*
	*dest = new_string;
}
void append2(char*& dest, const char* src)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	if (dest == nullptr)
	{
		dest = new char[1];
		(dest)[0] = '\0';
	}

	//check how long dest and src is
	for (len1 = 0; (dest)[len1] != '\0'; len1++);
	for (len2 = 0; src[len2] != '\0'; len2++);

	//create new string with len1 + len2+ 1
	char* new_string = new char[len1 + len2 + 1];

	//add everything to new string by going over dest unti len1
	for (unsigned int i = 0; i < len1; i++) {
		//add dest[i] value to newstring
		new_string[i] = (dest)[i];
	}

	//same as loop above
	for (unsigned int i = 0; i < len2; i++) {
		//newstring len1 +i so nothing is overwritten
		new_string[len1 + i] = src[i];
	}

	//add \0 to end of char array
	new_string[len1 + len2] = '\0';

	//delete dest
	delete[] dest;

	//dest is now newstring
	dest = new_string;
}

int main()
{
	char* str = new char[9] { "vierkant"};
	append(&str, "kaas");
	append2(str, "kaas");

	std::cout << str << std::endl;
}