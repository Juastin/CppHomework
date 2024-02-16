#include <iostream>
#include <fstream>
#include "BinarySearchTree.h"
using namespace std;

//int MutateFile(char filename[])
//{
//    ifstream f1;
//    ofstream f2;
//    int i;
//    char c;
//    int sum = 0;
//    f1.open(filename, ios::binary);
//    f2.open("writeaway.txt", ios::binary);
//    if (!f1.good() || !f2.good()) {
//        return -1;
//    }
//    //f1.read((char*)&i, sizeof(int)); <-- buffer
//    f1.get(c);
//    if (c >= '0' && c <= '9')
//    {
//        sum += c - '0';
//    }
//    else {
//        f2.put(c);
//    }
//    while (!f1.eof()) {
//        cout << i << endl;
//        sum += i;
//        f1.read((char*)&i, sizeof(i));
//    }
//    f1.close();
//
//    f1.read((char*)&c, sizeof(c));
//
//    return sum;
//}
//void append(char body[], char tail[])
//{
//    int i = 0;
//    int y = 0;
//    while (body[i] != '\0') {
//        i++;
//    }
//    while (tail[y] != '\0') {
//        y++;
//    }
//    while ()
//    /*char temp[20];
//    while (body[y] != '\0') 
//    {
//        temp[y] = body[y];
//        y++;
//    }
//    while (tail[i] != '\0') 
//    {
//        temp[y+i] = tail[i];
//        y++;
//        i++;
//    }*/
//    temp[y + i + 1] = '\0';
//    //delete[] body;
//    body = new char[y + i + 1];
//    body = temp;
//    /*while (temp[x] != '\0') 
//    {
//        body[x] = temp[x];
//    }*/
//    
//}

void append(char** dest, const char* src)
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
        new_string[len1+i] = src[i];
    }

    new_string[len1 + len2] = '\0';

    delete[] *dest;

    *dest = new_string;
}
void append2(char*& dest, const char* src)
{
    unsigned int len1 = 0;
    unsigned int len2 = 0;
    if (dest == nullptr)
    {
        dest = new char[1];
        (dest)[0] = '\0';
    }

    for (len1 = 0; (dest)[len1] != '\0'; len1++);

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

int main()
{
    char* str = new char[9] { "vierkant"};
    //char* str = nullptr;
    append(&str, "kaas");
    append2(str, "kaas");

    cout << str << endl;

    /*cout << "Hello World!" << endl;
    char body[]{"test"};
    char tail[]{ "ing..." };

    append(&body, tail);
    cout << body << endl;*/
    //MutateFile((char*)"file.txt");
    //BST<double>* b = new BST<double>(1.0);
}
