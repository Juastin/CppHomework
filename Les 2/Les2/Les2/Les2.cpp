// Les2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


// 1. Create a function that gets two integers ‘numerator’ and ‘denominator’ that form a fraction.Alter these
// integers so that the new fraction is a simplified version of the first.
// 2. Create a two dimensional character array and fill it with several names of different length.Print the names
// in a for - loop.
// 3. Create a function that gets a c - string as input and checks whether it is a palindrome.One can assume the
// word in the c - string ends with ‘\0’.
// 4. Create a function that reads a txt - file and prints it to the console.
// 5. Create a struct ‘PlayerState’ with the following attributes :
// name(type : char[20])
// level(type : int)
// health(type : double)
// experience(type : int)
// 6. Create an array with 3 PlayerStates, filland print them
// 7. Save the array with PlayerStates to a binary file with name : “game.dat”
// 8. Load the file : “game.dat” and create a textfile that stores the names from the PlayerStates.

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Date {
    int day;
    char month[30];
    int year;
};

struct Student {
    int number;
    char name[40];
    Date birth;
};

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

void showStudents(const char filename[]) {
    Student student;
    ifstream f1;

    f1.open(filename, ios::binary);

    if (!f1.good()) {
        return;
    }
    f1.read((char*)&student, sizeof(student));
    while (!f1.eof()) {
        cout << "name= " << student.name << ", " << "birthday= " << student.birth.day << endl;
        f1.read((char*)&student, sizeof(student));
    }
    f1.close();
}

int findGcd(int n1, int n2) {

    if (n2 > n1) {
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }
    int hcf = -1;
    for (int i = 1; i <= n2; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            hcf = i;
        }
    }
    return hcf;
}

void lowestFraction(int n1, int n2) {
    int n3 = findGcd(n1, n2);
    if (n3 == -1) {
        cout << n1 << "/" << n2 << endl;
        return;
    }
    int newn1 = n1 / n3;
    int newn2 = n2 / n3;
    cout << newn1 << "/" << newn2 << endl;
}

void showFraction(int numerator, int denominator) {
    cout << numerator << "/" << denominator << endl;
    lowestFraction(numerator, denominator);
}

void print2DArray(char arr[3][7], int length1, int length2) {
    for (int i = 0; i < length1; i++) {
        for (int y = 0; y < length2; y++) {
            cout << arr[i][y];
        }
        cout << endl;
    }
}

void printPalindrome(char str[10] ) {
    int length = strlen(str)-1;
    cout << length << endl;
    bool end = false;
    /*while (!end) {
        if (str[length] == '\0'){
            end = true;
        }
        length++;
    }*/
    
    int x = 0;
    int y = length;
    //y -= 2;
    while (x < y) {
        if (str[x] != str[y]) {
            cout << "This is not a palindrome." << endl;
            return;
        }
        x++;
        y--;
    }
    cout << "This is a palindrome!" << endl;
}

int main() {
    showStudents("students.dat");
    showFraction(10, 20);

    char x[3][7] = { {'J','U','S','T', 'I', 'N'}, {'J','A','N'}, {'K','E','E','S',}};
    print2DArray(x, 3, 7);
    char str[10] = "reddder";
    printPalindrome(str);
}

