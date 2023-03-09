// 29_다형성7.cpp
#include <iostream>
using namespace std;

// 1. 자식의 소멸자가 제대로 호출되지 않는 문제가 발생하는 이유를
//    이해해야 합니다.
//   => 소멸자도 함수이고, 정적 바인딩을 하기 때문입니다.

// 2. 해결방법
//  => 소멸자도 가상으로 만들어야 합니다.

// 3. 가상 소멸자가 필요한 이유
//  - 부모의 포인터를 통해 자식 객체의 메모리를 delete할 때
//    자식의 소멸자가 제대로 호출되지 않는 문제를 해결하기 위해
//    필요합니다.
//   "부모 클래스의 소멸자는 반드시 가상으로 만들어야 합니다."

// 4. 부모의 소멸자가 가상이면, 자식의 소멸자도 가상입니다.
class Animal {
public:
    Animal() { cout << "Animal()" << endl; }
    virtual ~Animal() { cout << "~Animal()" << endl; }
};

class Dog : public Animal {
public:
    Dog() { cout << "Dog()" << endl; }
    ~Dog() override { cout << "~Dog()" << endl; }
    // 컴파일 오류 - 부모의 소멸자가 가상함수가 아니기 때문에
    //            발생합니다.
};

int main()
{
    Animal* p = new Dog;

    delete p;
    // 정적 바인딩: Animal::~Animal()
    // 동적 바인딩: Dog::~Dog()

    // Dog d;
}