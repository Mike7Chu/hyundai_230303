// 12_레퍼런스2.cpp
#include <iostream>
using namespace std;

void inc1(int x) { ++x; }
void inc2(int* x) { ++(*x); }
void inc3(int& x) { ++x; }

int main()
{
    int n = 10;
    inc1(n); // call by value
    inc2(&n); // call by pointer
    inc3(n); // call by reference

    cout << n << endl;
}