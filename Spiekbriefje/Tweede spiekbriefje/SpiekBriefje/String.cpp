#include "string.h"

String::String(const char* s) {

	while (s[len] != '\0')
		len++;

	str = new char[len + 1];
	for (int i = 0; i <= len; i++)
	{
		str[i] = s[i];
	}
}

String::String(String& s) {
	len = s.length();
	str = new char[len + 1];
	for (int i = 0; i <= len; i++)
	{
		str[i] = s.str[i];
	}
}

String::String() {
	str = new char[1];
	str[0] = '\0';
	len = 0;
}

String::~String() {
	if (str != nullptr)
		delete[] str;
}

char* String::toString() {
	return str;
}

int String::length() {
	return this->len;
}

String& String::operator=(String& s) {
	if (str != nullptr)
		delete[] str;
	len = s.length();
	str = new char[len + 1];
	for (int i = 0; i <= len; i++)
	{
		str[i] = s.str[i];
	}
	return *this;
}

//https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp7_OperatorOverloading.html
String& String::operator+=(String& s) {
	String s2;
	s2.str = strcat(str, s.str);
	s2.len = this->len + s.len;
	return s2;
}

char String::operator[](const int x) {
	return str[x];
}

const bool operator==(const String& s1, const String& s2) {
	return s1.str == s2.str;
}

const bool operator!=(const String& s1, const String& s2) {
	return s1.str != s2.str;
}

const bool operator<(const String& s1, const String& s2) {
	return s1 < s2;
}

const bool operator >(const String& s1, const String& s2) {
	return s1 > s2;
}

//https://www.geeksforgeeks.org/c-program-to-concatenate-two-strings-using-operator-overloading/
std::string operator+(const String& s1, const String& s2){
	return strcat(s1.str, s2.str);
}

std::ostream& operator<<(std::ostream& s, const String& str) {
	s << str.str << " / " << str.len;
	return s;
}

