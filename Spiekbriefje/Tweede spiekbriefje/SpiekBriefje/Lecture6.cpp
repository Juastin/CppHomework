#include "Lecture6.h"

//outside of class function template
template<typename T>
T add(T const&, T const&);

template int add<int>(int const&, int const&);
template double add<double>(double const&, double const&);

//inside class template the template will be added in the .h file
template<typename T>
Lecture6<T>::Lecture6(T a) {
	this->x = a;
}