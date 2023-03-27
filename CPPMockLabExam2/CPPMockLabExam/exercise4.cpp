#include <iostream>

#include "exercise4.h"


void append(char dest[], char src[])
{
    int i = 0;
    while (dest[i] != '\0')
        i++;
    int j = 0;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

void exercise4()
{
    char body[16] = "test";
    char tail[] = "ing...";
    std::cout << strlen(tail) << std::endl;
    append(body, tail);

    std::cout << body << std::endl;
}
