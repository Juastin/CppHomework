#include "Fraction.h"

Fraction::Fraction() {
	numerator = 0;
	denumerator = 0;
}

Fraction::Fraction(int a, int b) {
	this->numerator = a;
	this->denumerator = b;
}

Fraction::~Fraction() {
	delete this;
}

const std::string Fraction::toString() {
	std::stringstream str;
	str << "numerator " << this->numerator << " denumerator= " << denumerator << std::endl;
	std::string s = str.str();
	return s;
}

Fraction Fraction::operator*=(const Fraction& f) {
	Fraction newF;
	newF.denumerator = denumerator * f.denumerator;
	newF.numerator = numerator * f.numerator;

	return newF;
}

Fraction Fraction::operator+=(const Fraction& f) {
	numerator = numerator + f.denumerator;
	denumerator = denumerator + f.denumerator;

	return *this;
}

Fraction Fraction::operator/=(const Fraction& f) {
	numerator = numerator / f.denumerator;
	denumerator = denumerator / f.denumerator;

	return *this;
}

Fraction Fraction::operator-=(const Fraction& f) {
	numerator = numerator - f.denumerator;
	denumerator = denumerator - f.denumerator;

	return *this;
}

Fraction operator*(const Fraction& f1, const Fraction& f2) {
	Fraction f;
	f.numerator = f1.numerator * f2.numerator;
	f.denumerator = f2.denumerator * f2.denumerator;

	return f;
}

std::ostream& operator<<(std::ostream& s, const Fraction& f) {
	s << f.numerator << "/" << f.denumerator;
	return s;
}

Fraction operator+(const Fraction& f1, const Fraction& f2) {
	Fraction f;
	f.numerator = f1.numerator + f2.numerator;
	f.denumerator = f1.denumerator + f2.denumerator;
	return f;
}

Fraction operator/(const Fraction& f1, const Fraction& f2) {
	Fraction f;
	f.numerator = f1.numerator / f2.numerator;
	f.denumerator = f1.denumerator / f2.denumerator;
	return f;
}

Fraction operator-(const Fraction& f1, const Fraction& f2) {
	Fraction f;
	f.numerator = f1.numerator - f2.numerator;
	f.denumerator = f1.denumerator - f2.denumerator;
	return f;
}
