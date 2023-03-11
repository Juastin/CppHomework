#include "Fraction.h"

#include <sstream>

Fraction::Fraction() {
	numerator = 0;
	denumerator = 1;
}
Fraction::Fraction(const int n, const int d) {
	numerator = n;
	denumerator = d;
}

string Fraction::toString() const {
	ostringstream oss;
	oss << numerator << "/" << denumerator;
	return oss.str();
}


ostream& operator<<(ostream& stream, Fraction f) {
	stream << f.toString();
	return stream;
}
Fraction operator*(const Fraction& lhs, const Fraction& rhs) {
	Fraction f(lhs.numerator * rhs.numerator, lhs.denumerator * rhs.denumerator);
	return f;
}
