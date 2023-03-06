// main.cpp
#include <iostream>
using namespace std;

#include "stack2.h"

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
}