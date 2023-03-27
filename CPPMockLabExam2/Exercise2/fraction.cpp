#include <iostream>
#include <string>
#include <ostream>
#include "fraction.h"

Fraction::Fraction()
{
	 numerator = 0;
	 denumerator = 1;
}

Fraction::Fraction(int n, int d)
{
	 numerator = n;
	 if (d != 0)
		  denumerator = d;
	 else
		  denumerator = 1;
}

Fraction::~Fraction()
{}

std::string Fraction::to_string() const
{
	 std::string result = std::to_string(numerator) + " / " +
		  std::to_string(denumerator);
	 return result;
}


int gcd(int a, int b)
{
	 int temp;
	 while (b != 0)
	 {
		  temp = a % b;
		  a = b;
		  b = temp;
	 }
	 return a;
}


void Fraction::simplify()
{
	 int factor = gcd(numerator, denumerator);
	 numerator /= factor;
	 denumerator /= factor;
}

void Fraction::multiply(const Fraction f)
{
	 numerator *= f.numerator;
	 denumerator *= f.denumerator;
	 simplify();
}

void Fraction::multiply(const Fraction f1, const Fraction f2)
{
	 numerator = f1.numerator * f2.numerator;
	 denumerator = f1.denumerator * f2.denumerator;
	 simplify();
}

void Fraction::add(const Fraction f)
{
	 numerator = numerator * f.denumerator + f.numerator * denumerator;
	 denumerator *= f.denumerator;
	 simplify();
}


void Fraction::add(const Fraction f1, const Fraction f2)
{
	 numerator = f1.numerator * f2.denumerator + f2.numerator * f1.denumerator;
	 denumerator *= f1.denumerator * f2.denumerator;
	 simplify();
}


Fraction& Fraction::operator= (const Fraction& f)
{
	 if (this == &f)
		  return *this;
	 this->numerator = f.numerator;
	 this->denumerator = f.denumerator;

	 return *this;
}
//Fraction operator*=(const Fraction& lhs, const Fraction& rhs)
//{
//	const Fraction f = lhs * rhs;
//	//lhs = const_cast<Fraction&>(f);
//	return f;
//	// ???
//}
std::ostream& operator<< (std::ostream& os, const Fraction& f)
{
	os << f.numerator << "/" << f.denumerator;
	return os;
}
