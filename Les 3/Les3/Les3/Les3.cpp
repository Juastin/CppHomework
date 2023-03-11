// Les3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>

using namespace std;
/*
void showPointers() {
    int* p = new int;
    cout << p << endl;
    cout << *p << endl;
    delete p;
    cout << p << endl;
    p = nullptr;
    cout << p << endl;
}

double* createDoubleBad(double a, double b) {
    double c = a + b;
    return &c;
}

double* createDoubleGood(double a, double b) {
    double* c = new double;

    *c = a + b;
    return c;
}

void showDoubles() {
    double a = 1;
    double b = 5;
    double* c;
    c = createDoubleBad(a, b);
    cout << *c << endl;
    int* x = new int;
    cout << *c << endl;
    c = createDoubleGood(a, b);
    cout << *c << endl;
    delete c;
}

int myCompare(const void* a, const void* b) {
    int* x = (int*)a;
    int* y = (int*)b;
    
    if (*x > *y)
        return 1;

    if (*x < *y)
        return -1;

    return 0;
}

void pointerSwap(int** p, int** q) {
    int* x = *p;
    *p = *q;
    *q = x;
}

void printPointerSwap() {
    int x = 1;
    int y = 5;
    int* p = &x;
    int* q = &y;

    cout << "p: " << p << endl;
    cout << "q: " << q << endl;

    pointerSwap(&p, &q);

    cout << "p: " << p << endl;
    cout << "q: " << q << endl;
}

void printPointerSwapEasy() {
    int* p = new int;
    int* q = new int;
    int* r;

    *p = 2;
    *q = 3;

    cout << "p: " << *p << " q: " << *q << endl;

    r = p;
    p = q;
    q = r;

    cout << "p: " << *p << " q: " << *q << endl;
    cout << "p: " << p << " q: " << q << endl;

    delete p;
    delete q;
    p = q = r = nullptr;

    cout << p << endl;
}
*/
int* printArrayPointer(int* p, int n) {
    p = new int[n];
    for (int i = 0; i < n; i++) {
        p[i] = i;
    }
    return p;
}

void makePascalsTriangle(int** p, int n) {
    for (int i = 0; i < n; i++) {
        int size = i + 1;
        p[i] = new int[size];
        for (int y = 0; y < size; y++) {
            if (i == 0 || y - 1 < 0 || y >= size - 1) {
                p[i][y] = 1;
            }
            else {
                p[i][y] = p[i - 1][y - 1] + p[i - 1][y];
            }
        }
    }
}
void printPascalsTriangle(int** p, int n) {
    for (int i = 0; i < n; i++) {
        int size = i + 1;
        for (int y = 0; y < size; y++) {
            cout << p[i][y] << " ";
        }
        cout << endl;
    }
}
void deletePascalsTriangle(int** p, int n) {
    for (int i = 0; i < n; i++) {
        int size = i + 1;
            delete p[i];
    }
}
int main()
{
    //showPointers();
    //showDoubles();
    //int a[] = { 7,1,5,2,3 };
    /*
    qsort((void*)a, 5, sizeof(int), myCompare);
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
    */
    //printPointerSwap();
    //printPointerSwapEasy();
    /*
    int p;
    int* x = printArrayPointer(&p, 10);
    cout << "Array is: ";
    for (int i = 0; i < 11; i++)
        cout << x[i] << "\t";
    cout << endl;
    cout << x << endl;
    delete x;
    x = nullptr;
    cout << x << endl;
    */
    const int n = 10;
    int* k[n];
    for (int i = 0; i < n; i++) {
        k[i] = new int;
    }
    //for (int i = 0; i < 1000000; i++) {
        makePascalsTriangle(k, n);
        printPascalsTriangle(k, n);
        deletePascalsTriangle(k, n);
    //}
    
}   

