#include <iostream>
#include "String.h"
#include "Fraction.h"
#include "Foo.h"

using namespace std;
void DoBar(Foo foo)
{
    int i = foo.GetFoo();
    cout << i << endl;
}
int main()
{
    String firstString;
    String secondString("Kaasmannentjes");
    
    String s3; 
    s3 = secondString;

    cout << firstString.length() << endl;
    cout << secondString.length() << endl;

    cout << secondString.toString() << endl;
    //cout << s3.toString() << endl;

    Fraction f1(1, 4);
    Fraction f2(2, 3);
    Fraction f3;

    cout << f1.toString() << endl;
    cout << f2.toString() << endl;
    cout << f3.toString() << endl;

    cout << f1 * f2 << endl;
    cout << "Explicit constructor:" << endl;
    DoBar(42);

}
