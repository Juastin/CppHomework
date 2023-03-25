// Les6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <string>
using namespace std;


vector<double> v;
vector<int> v2(10);

void print(double& d) 
{
    cout << d << endl;
}
void print_int(int& i)
{
    cout << i << endl;
}

int main()
{
    // 1. Create an empty stack for doubles, place several doubles on it, and print it using ‘for each’.
    v.push_back(1.1);
    v.push_back(2.1);
    v.push_back(3.1);
    for_each(v.begin(), v.end(), print);


    // 2. Create an integer vector of size 10, fill each element with your favorite number, print it.
    fill(v2.begin(), v2.end(), 8);
    for_each(v2.begin(), v2.end(), print_int);

    // 3. Copy the binary search tree from the previous lesson and alter it to a template function.

    // 4. Extend your template BST with a delete(…) function that lets you delete given element.


}
