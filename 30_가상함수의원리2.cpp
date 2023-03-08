// 30_가상함수의원리2.cpp
#include <iostream>
using namespace std;

class AAA {
public:
    virtual void foo() { cout << "AAA foo" << endl; } // 1
};

class BBB {
public:
    virtual void goo() { cout << "BBB goo" << endl; } // 2
};

int main()
{
    AAA aaa;
    BBB* p = reinterpret_cast<BBB*>(&aaa);

    p->goo();
}