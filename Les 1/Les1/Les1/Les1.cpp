// Les1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

int sum(int first, int second) 
{
    return first + second;
}

void even_or_odd(int number) 
{
    number = number % 2;
    if (number == 0) 
    {
        cout << "Even!" << endl;
    }
    else {
        cout << "Odd!" << endl;
    }
}

void size_of_int(int number) 
{
    cout << "De int is zo groot: " << sizeof(number) << endl;
}

int power(int base, int exponent) 
{
    if (exponent != 0) 
    {
        return (base * power(base, exponent - 1));
    }
}

bool prime(int n)
{
    for (int z = 2; z <= sqrt(double(n)); z++)

        if (n % z == 0)
            return false;

    return true;
}

int find_in_array(int array[], int length, int value)
{
    for (int i = 0; i <= length; i++)
    {
        if (array[i] == value)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    std::cout << sum(1, 2) << endl;
    even_or_odd(19);
    int number = 10;
    int array[10];
    int arr[4] = { 3,4,2,1 };
    int value = 1;

    cout << "De int is zo groot: " << sizeof(array) << endl;
    size_of_int(number);
    cout << "3 tot de macht 5 is: " << power(3, 5) << endl;
    if (prime(3))
        cout << "Priemgetal" << endl;
    else
        cout << "Geen priemgetal" << endl;
    cout << "De locatie van waarde " << value << " is positie: " << find_in_array(arr, 4, value) << endl;



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
