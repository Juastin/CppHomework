#ifndef _FRACTION_H_
#define _FRACTION_H_

#include <string>
#include <iostream>


class Fraction
{
private:
    int numerator;
    int denumerator;

public:
    Fraction();
    Fraction(int n, int d);
    ~Fraction();

    std::string to_string() const;
    void simplify();
    void multiply(const Fraction f);
    void multiply(const Fraction f1, const Fraction f2);
    void add(const Fraction f);
    void add(const Fraction f1, const Fraction f2);

    Fraction& operator= (const Fraction& f);
    Fraction& operator*= (const Fraction& f);
    std::ostream& operator<< (const Fraction& f);
    friend Fraction& operator*= (const Fraction&, const Fraction&);
    friend std::ostream& operator<<(std::ostream& os, const Fraction& f);
};
Fraction& operator*= (const Fraction&, const Fraction&);
std::ostream& operator<<(std::ostream& os, const Fraction& f);

#endif
