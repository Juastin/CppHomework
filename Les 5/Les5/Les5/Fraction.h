#pragma once

#include <string>
using namespace std;
class Fraction
{
private:
	int numerator;
	int denumerator;

public:
	Fraction();
	Fraction(const int, const int);
	string toString() const;


	friend Fraction operator*(const Fraction& lhs, const Fraction& rhs);
	friend Fraction operator+(const Fraction& lhs, const Fraction& rhs);
	friend Fraction operator-(const Fraction& lhs, const Fraction& rhs);
	friend Fraction operator/(const Fraction& lhs, const Fraction& rhs);
	//friend Fraction operator+=(const Fraction& lhs, const Fraction& rhs);
};
ostream& operator<<(ostream&, Fraction);
Fraction operator*(const Fraction& lhs, const Fraction& rhs);
Fraction operator+(const Fraction& lhs, const Fraction& rhs);
Fraction operator-(const Fraction& lhs, const Fraction& rhs);
Fraction operator/(const Fraction& lhs, const Fraction& rhs);
//Fraction operator+=(const Fraction& lhs, const Fraction& rhs);
