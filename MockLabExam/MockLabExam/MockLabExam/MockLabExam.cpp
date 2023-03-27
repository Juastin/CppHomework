#include <iostream>
#include <fstream>
#include "BinarySearchTree.h"
using namespace std;

int MutateFile(char filename[])
{
    ifstream f1;
    ofstream f2;
    int i;
    char c;
    int sum = 0;
    f1.open(filename, ios::binary);
    f2.open("writeaway.txt", ios::binary);
    if (!f1.good() || !f2.good()) {
        return -1;
    }
    f1.read((char*)&i, sizeof(int));
    while (!f1.eof()) {
        cout << i << endl;
        sum += i;
        f1.read((char*)&i, sizeof(i));
    }
    f1.close();

    f1.read((char*)&c, sizeof(c));

    return sum;
}
void append(char body[], char tail[])
{
    int i = 0;
    int y = 0;
    int x = 0;
    char temp[20];
    while (body[y] != '\0') 
    {
        temp[y] = body[y];
        y++;
    }
    while (tail[i] != '\0') 
    {
        temp[y+i] = tail[i];
        y++;
        i++;
    }
    temp[y + i + 1] = '\0';
    //delete[] body;
    body = new char[y + i + 1];
    body = temp;
    /*while (temp[x] != '\0') 
    {
        body[x] = temp[x];
    }*/
    
}

int main()
{
    cout << "Hello World!" << endl;
    char body[]{"test"};
    char tail[]{ "ing..." };

    append(body, tail);
    cout << body << endl;
    //MutateFile((char*)"file.txt");
    //BST<double>* b = new BST<double>(1.0);
}
