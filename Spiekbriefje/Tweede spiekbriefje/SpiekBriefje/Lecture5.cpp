#include "Lecture5.h"
#include <iostream>
#include "String.h"

void main() {
    std::cout << "Hello World!\n";
    String s1;
    String s2("My string");
    String s3;
    s3 = s2;
    std::cout << "string= " << s1.toString() << std::endl;
    std::cout << "len=" << s1.length() << std::endl;
    std::cout << "string=" << s2.toString() << std::endl;
    std::cout << "len=" << s2.length() << std::endl;
}

/*
Rule of three:
    1. destructor
        ~string verwijdert string nadat hij klaar is
    2. copy constructor
        s3 = s2; can give error when there is no copy constructor
        String(String& s){
            len = s.len;
            str = new char[len +1];
            for (int i = 0; i <= len; i++)
                str[i] = s.str[i];
        }
    3. overlaod assign operator
        String& String::operator=(String& s){
            len = s.len;
            if (str != nullptr)
                delete[] str;
            str = new char[len +1];
            for (int i=0; i <= len; i++){
                str[i] = s.str[i];
            }

            return *this;
        }

        const gebruiken waar je const kan gebruiken
        Look for friend classes in string and fraction
*/