#pragma once
using namespace std;
class String
{
private:
	char* str;
	int len;

public:
	String();
	~String();
	String(const char *s);
	char* toString() const;
	int length() const;
	//String(const String&);

	String& operator=(const String& s);
	String& operator+=(const String&);


	char operator[](const int) const;
	friend bool operator==(const String&, const String&);
	friend bool operator!=(const String&, const String&);
	friend bool operator<(const String&, const String&);
	friend bool operator>(const String&, const String&);
	friend String operator+(const String&, const String&);
	friend ostream& operator<<(ostream&, const String&);
};

void replace(const int beg, const String&);
bool search(const String);
String& toupper();
String& tolower();
bool operator==(const String&, const String&);
bool operator!=(const String&, const String&);
bool operator<(const String&, const String&);
bool operator>(const String&, const String&);
String operator+(const String&, const String&);
ostream& operator<<(ostream&, const String&);





