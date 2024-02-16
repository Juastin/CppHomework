#include "AppendChars.h"
void AppendChars::append(char** dest, const char* src)
{
    unsigned int len1 = 0;
    unsigned int len2 = 0;
    if (*dest == nullptr)
    {
        *dest = new char[1];
        (*dest)[0] = '\0';
    }

    for (len1 = 0; (*dest)[len1] != '\0'; len1++);

    for (len2 = 0; src[len2] != '\0'; len2++);

    char* new_string = new char[len1 + len2 + 1];

    for (unsigned int i = 0; i < len1; i++) {
        new_string[i] = (*dest)[i];
    }
    for (unsigned int i = 0; i < len2; i++) {
        new_string[len1 + i] = src[i];
    }

    new_string[len1 + len2] = '\0';

    delete[] * dest;

    *dest = new_string;
}
void AppendChars::append2(char*& dest, const char* src)
{
    unsigned int len1 = 0;
    unsigned int len2 = 0;
    if (dest == nullptr)
    {
        dest = new char[1];
        (dest)[0] = '\0';
    }
    // Empty for loop for length
    for (len1 = 0; (dest)[len1] != '\0'; len1++);
    // Empty for loop for length
    for (len2 = 0; src[len2] != '\0'; len2++);

    char* new_string = new char[len1 + len2 + 1];

    for (unsigned int i = 0; i < len1; i++) {
        new_string[i] = (dest)[i];
    }
    for (unsigned int i = 0; i < len2; i++) {
        new_string[len1 + i] = src[i];
    }

    new_string[len1 + len2] = '\0';

    delete[] dest;

    dest = new_string;
}
void createArray(int*& p, int n) {
    p = new int[n];

    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }
}