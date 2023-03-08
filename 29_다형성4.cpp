// 29_다형성4.cpp

#include <iostream>
using namespace std;

// 1. 부모의 멤버 함수를 자식이 재정의 할 수 있습니다.
//  "함수 오버라이딩(Overriding)"

class Animal {
public:
    virtual void Go() const { cout << "Animal go" << endl; }
};

class Dog : public Animal {
public:
    virtual void Go() const { cout << "Dog go" << endl; }
};

// 2. 함수 바인딩(binding): 어떤 함수를 호출할지 결정하는 것
//   Animal* p = &d;
//   p->Go();
// 1. 정적 바인딩(static binding)
//  : 컴파일 타임에 결정되는 것
//    컴파일러가 p의 타입을 보고 어떤 함수를 호출할지 결정합니다.

// 2. 동적 바인딩(dynamic binding)
//  : 런타임에 결정되는 것
//    p가 실행 시간에 어떤 타입의 객체를 가지고 있는지 조사해서,
//    호출합니다.

// 3. virtual 키워드로 지정된 멤버 함수는
//    동적 바인딩으로 함수를 호출합니다.

int main()
{
    Animal a;
    Dog d;

    Animal* p = &a;
    p->Go();

    p = &d;
    p->Go();
}

#if 0
int main()
{
    Animal a;
    a.Go();

    Dog d;
    d.Go();
}
#endif