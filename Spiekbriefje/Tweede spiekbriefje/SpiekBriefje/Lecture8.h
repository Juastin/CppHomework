#include <iostream>

int main() {
    // Random values:
    int number = rand(); // random number
    int number2 = rand() % 100; // Range 0 to 99
    int number3 = rand() % 30 + 1985; // Range 1985 - 2014 

    std::cout << number3 << std::endl;
}