// 30_가상함수의원리2.cpp
#include <iostream>
using namespace std;

// 정적 바인딩과 동적 바인딩의 개념을 이해하기 위한 예제입니다.

class AAA {
public:
    virtual void foo() { cout << "AAA foo" << endl; } // 1
    // void foo() { cout << "AAA foo" << endl; } // 1
};

class BBB {
public:
    virtual void goo() { cout << "BBB goo" << endl; } // 2
    // void goo() { cout << "BBB goo" << endl; } // 2
};

int main()
{
    AAA aaa;
    BBB* p = reinterpret_cast<BBB*>(&aaa);

    p->goo();
}