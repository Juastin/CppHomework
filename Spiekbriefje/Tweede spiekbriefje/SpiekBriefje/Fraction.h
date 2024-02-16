#pragma once
#include <iostream>
#include <sstream>   

class Fraction
{
private:
	int numerator;
	int denumerator;
public:
	Fraction();
	Fraction(int, int);
	~Fraction();
	const std::string toString();
	Fraction operator*=(const Fraction&);
	Fraction operator+=(const Fraction&);
	Fraction operator/=(const Fraction&);
	Fraction operator-=(const Fraction&);

	friend Fraction operator*(const Fraction&, const Fraction&);
	friend std::ostream& operator<<(std::ostream&, const Fraction&);
	friend Fraction operator+(const Fraction&, const Fraction&);
	friend Fraction operator/(const Fraction&, const Fraction&);
	friend Fraction operator-(const Fraction&, const Fraction&);
};

Fraction operator*(const Fraction&, const Fraction&);
std::ostream& operator<<(std::ostream&, const Fraction&);
Fraction operator+(const Fraction&, const Fraction&);
Fraction operator/(const Fraction&, const Fraction&);
Fraction operator-(const Fraction&, const Fraction&);
