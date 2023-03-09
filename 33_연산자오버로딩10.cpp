// 33_연산자오버로딩10.cpp
#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }

// 함수 객체(Functor)
// 정의: 함수 호출 연산자를 재정의하면, 객체를 대상으로
//      함수 처럼 사용할 수 있습니다.

class Adder {
public:
    int operator()(int a, int b) { return a + b; }
};

int main()
{
    Adder adder;

    cout << adder(10, 20) << endl;
    // 객체를 대상으로 함수 호출 연산자를 재정의할 수 있습니다.
    // adder.operator()(10, 20)

    cout << add(10, 20) << endl;
}