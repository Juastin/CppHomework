// Spiekbriefje.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include "AppendChars.h"
#include "ReadingFiles.h"

using namespace std;
//int main()
//{
//    char* str = new char[9] { "vierkant"};
//    //char* str = nullptr;
//    AppendChars::append(&str, "kaas");
//    AppendChars::append2(str, "kaas");
//    cout << str << endl;
//
//    // << is an operator for inserting into the stream
//    // • A member operator of the class ostream
//    // • Returns a reference to stream on which it is called
//    // • Can be applied repeatedly to references left - toright
//
//
//    // Random values:
//    int number = rand(); // random number
//    int number2 = rand() % 100; // Range 0 to 99
//    int number3 = rand() % 30 + 1985; // Range 1985 - 2014 
//
//    cout << number3 << endl;
//
//}

//note:
//- rule of three is belangrijk,
//- ze rekenen af op niet verwijderde memory.
//- regels kunnen tellen in bestand
//- namen uit een bestand kunnen pikken
//- weten hoe bits werkt
//- bst classes bewaren
//- operators weten hoe die werken
//- weten hoe strings werken en chars


// Extra handige methodes
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

bool prime(int n)
{
    for (int z = 2; z <= sqrt(double(n)); z++)

        if (n % z == 0)
            return false;

    return true;
}