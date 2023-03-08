// 29_다형성5.cpp
#include <iostream>
using namespace std;

// 1. 부모가 가상함수이면, 자식이 재정의(오버라이딩)한 함수도 가상함수입니다.
//   - virtual 명시하는 것이 좋습니다.

// 2. 오버라이딩 주의사항
//  1) 부모가 제공한 함수의 이름을 잘못 명시한 경우,
//     알기 어렵습니다.
//  2) 반드시 가상함수가에 대해서만 오버라이딩을 해야합니다.
//     그래야 부모의 포인터(참조)를 통해 해당 기능을
//     제대로 이용할 수 있습니다.

// 3. C++11, override
///   1) 부모가 제공한 함수가 없을 경우, 컴파일 오류 발생
//    2) 부모가 제공한 함수가 가상함수가 아닌 경우, 컴파일 오류 발생

class Animal {
public:
    // virtual void Hello() { }
    virtual void Hello() { }

    virtual void Go() const { cout << "Animal go" << endl; }
};

class Dog : public Animal {
public:
    // virtual void Hello() { }  - X
    // virtual void Hello() override { } // 1
    void Hello() override { } // 2

    // void Hello() override { }
    // virtual void Hel1o() override { }

    virtual void Go() const { cout << "Dog go" << endl; }
};

int main()
{
    Animal a;
    Dog d;

    Animal* p = &a;
    p->Go();

    p = &d;
    p->Go();
}