// 25_static3.cpp
#include <iostream>
using namespace std;

// 멤버 데이터, 멤버 함수
// 1. 객체를 생성해야지만 사용할 수 있습니다.
// 2. 멤버 함수는 this가 암묵적으로 전달됩니다.
//   => 멤버 데이터에 대한 접근과, 멤버 함수의 호출이 가능합니다.
//   => this가 필요하지 않은 정적 멤버 데이터와 정적 멤버 함수는 호출 가능합니다.

// 정적 멤버 데이터, 정적 멤버 함수
//  : 클래스의 접근 제어를 할 수 있는 전역 변수와 전역 함수의 개념으로 이해해야 합니다.

// 1. 객체를 생성하지 않아도 사용할 수 있습니다.
// 2. 정적 멤버 함수는 this가 없기 때문에,
//    정적 멤버 함수 안에서 멤버 데이터에 대한 접근이나,
//    멤버 함수를 호출할 수 없습니다.
// 3. this가 필요하지 않은 정적 멤버 데이터와 정적 멤버 함수는 호출 가능합니다.

class Sample {
    static int n; // 정적 멤버 데이터

    int data; // 멤버 데이터

public:
    static void foo() // 정적 멤버 함수
    {
        // goo();
        // data = 10;
    }

    static void hoo(Sample* self)
    {
        self->goo(); // this->goo()
        self->data = 10; // this->data = 10;
    }

    // void goo(Sample* this)
    void goo() // 멤버 함수
    {
        goo(); // this->goo();
        data = 10; // this->data = 10;
    }
};

int Sample::n = 0;

int main()
{
    Sample s;
    Sample::hoo(&s); // !!!
}