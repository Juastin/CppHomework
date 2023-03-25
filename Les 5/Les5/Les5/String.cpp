#include <iostream>

#include "String.h"

String::String() {
	cout << "String::String()" << endl;
	str = new char[1];
	str[0] = '\0';
	len = 0;
};

String::String(const char* s) {
	cout << "String::String(const char* s)" << endl;
	len = 0;
	while (s[len] != '\0') {
		len++;
	}
	str = new char[len+1];
	for (int i = 0; i <= len; i++) {
		str[i] = s[i];
	}
}

String& String::operator=(const String& s) {
	cout << "String::operator=" << endl;
	if (str != nullptr) {
		delete[] str;
	}
	len = s.len;
	str = new char[len + 1];
	for (int i = 0; i <= len; i++) {
		str[i] = s.str[i];
	}
	return *this;
}



char String::operator[](const int num) const {
	return str[num];
}

char* String::toString() const {
	return str;
}

int String::length() const {
	return this->len;
}
String::~String() {
	cout << "~String()" << endl;
	if (str != nullptr) {
		delete[] str;
	}
}

bool operator==(const String& a, const String& b) {
	for (int i = 0; i < a.length(); i++) 
		if (a[i] != b[i])
			return false;
	return true;
}
bool operator!=(const String& a, const String& b) {
	for (int i = 0; i < a.length(); i++)
		if (a[i] != b[i])
			return true;
	return false;

}
bool operator<(const String& a, const String& b) {
	int j = 0;
	int y = 0;
	for (int i = 0; i < a.length(); i++) 
	{
		j += a[i];
		y += b[i];
	}
	if (j < y)
		return true;
	return false;
	
}
bool operator>(const String& a, const String& b) {
	int j = 0;
	int y = 0;
	for (int i = 0; i < a.length(); i++)
	{
		j += a[i];
		y += b[i];
	}
	if (j > y)
		return true;
	return false;

}
String operator+(const String& a, const String& b) {
	int len = a.length() + b.length();

	// ???

	return String();
}

ostream& operator<<(ostream& n , const String&) {
	return n;
}
