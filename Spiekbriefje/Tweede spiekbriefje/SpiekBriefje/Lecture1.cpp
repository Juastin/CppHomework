#include "Lecture1.h"

//Needed for base functions suce as cout or cin
#include <iostream>
void printArrayLength(int a[]);
//function that is resided in the main cpp. this one calls to every other function or class
int main()
{
    //stander for writeline or console.log
    std::cout << "Hello World!\n";

    //array
    int x[3];
    for (int i = 0; i < 3; i++) {
        //it is not filled so every array index has a random value or adres
        std::cout << x[i] << std::endl;
    }

    for (int i = 0; i < 10; i++) {
        //it is not filled so every array index has a random value or adres
        //even tho the array only has 3 indexes.
        //it will print random numbers until 10 is done
        std::cout << x[i] << std::endl;
    }

    std::cout << "size of int   :" << sizeof(int) << std::endl;
    //size of int 4

    std::cout << "size of array x:" << sizeof(x) << std::endl;
    //size of array x 12

    std::cout << "length of array x" << sizeof(x) / sizeof(int) << std::endl;
    //length of array x 3

    printArrayLength(x);
}

void printArrayLength(int a[]) {
    std::cout << "printArrayLength:" << sizeof(a) << std::endl;
    //printarraylenght 4
}