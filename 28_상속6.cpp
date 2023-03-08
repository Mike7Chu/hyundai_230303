// 28_상속6.cpp
#include <iostream>
using namespace std;

// 부모 클래스의 객체는 생성이 불가능하고,
// 자식 객체의 생성만 가능하도록 하고 싶다.

// protected 생성자
// - Animal 타입 객체는 생성할 수 없지만,
//   Animal 자식 객체는 생성할 수 있도록 하겠다.
//  => Animal을 추상 타입으로 사용하겠다.
class Animal {
protected:
    Animal() { }
};

class Dog : public Animal {
public:
    // Dog() : Animal() {}
};

int main()
{
    // Animal a;
    Dog d;
    // Dog::Dog()
}