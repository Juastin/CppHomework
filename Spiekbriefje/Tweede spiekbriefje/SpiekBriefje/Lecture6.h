#pragma once

template <typename T>
class Lecture6
{
private:
	T x;
public:
	Lecture6();
	Lecture6(T a);
	T min(T);


};

//to define that the class takes ints or doubles
template class Lecture6<int>;
template class Lecture6<double>;


//struct template
// look for this in mocklabexam
