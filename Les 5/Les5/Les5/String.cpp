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

//String::String(const String& s) {
//}
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

char* String::toString() {
	return str;
}

int String::length() {
	return this->len;
}
String::~String() {
	cout << "~String()" << endl;
	if (str != nullptr) {
		delete[] str;
	}
}

bool operator==(const String&, const String&) {
	return true;
}
bool operator!=(const String&, const String&) {
	return true;

}
bool operator<(const String&, const String&) {
	return true;

}
bool operator>(const String&, const String&) {
	return true;

}
String operator+(const String&, const String&) {
	return String();
}
ostream& operator<<(ostream& n , const String&) {
	return n;
}
