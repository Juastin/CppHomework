#include <iostream>
class String
{
private:
	char* str;
	int len;
public:
	String();
	~String();
	String(const char* s);
	String(String& s);
	char* toString();
	int length();

	String& operator=(String& s);
	String& operator+=(String&);

	char operator[](const int);
	friend const bool operator==(const String&, const String&);
	friend const bool operator !=(const String&, const String&);
	friend const bool operator<(const String&, const String&);
	friend const bool operator>(const String&, const String&);
	friend std::string operator+(const String&, const String&);
	friend std::ostream& operator <<(std::ostream&, const String&);
};

const bool operator==(const String&, const String&);
const bool operator!=(const String&, const String&);
const bool operator<(const String&, const String&);
const bool operator>(const String&, const String&);
std::string operator+(const String&, const String&);
std::ostream& operator <<(std::ostream&, const String&);