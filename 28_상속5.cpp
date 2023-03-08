#include <iostream>
using namespace std;

// 생성자에서 초기화리스트를 반드시 정의해야 하는 경우 4가지
// 1. const 멤버
// 2. reference 멤버
// 3. 멤버 클래스가 기본 생성자를 제공하지 않을 경우
// 4. 부모 클래스가 기본 생성자를 제공하지 않을 경우

class Animal {
    int age;

public:
    Animal(int n)
        : age(n)
    {
    }
};

class Dog : public Animal {
    int color;

public:
    Dog(int a, int c)
        : Animal(a)
        , color(c)
    {
    }
};

int main()
{
    Dog d(100, 42);
}

#if 0
class Dog : public Animal {
    int color;

public:
    // Dog() : Animal() {}
    Dog()
        : Animal(42) // Animal::Animal(int)
        , color(100)
    {
    }
};

int main()
{
    Dog d;
}
#endif