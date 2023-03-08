// 29_다형성2.cpp
#include <iostream>
using namespace std;

class Animal {
    int age = 10; // C++11, 멤버 초기화 문법

public:
    int GetAge() const { return age; }
};

class Dog : public Animal {
};

class Cat : public Animal {
};

// 1. 동종을 처리하는 함수를 정의할 수 있습니다.
// : Animal을 상속 받는 모든 자식 클래스의 객체는 해당 기능을
//   이용할 수 있습니다.
void PrintAge(Animal* p)
{
    cout << p->GetAge() << endl;
}

int main()
{
    Dog d;
    Cat c;

    PrintAge(&d);
    PrintAge(&c);
}

#if 0
class Dog {
    int age = 10; // C++11, 멤버 초기화 문법

public:
    int GetAge() const { return age; }
};

class Cat {
    int age = 20;

public:
    int GetAge() const { return age; }
};

void PrintAge(Dog* p)
{
    cout << p->GetAge() << endl;
}

void PrintAge(Cat* p)
{
    cout << p->GetAge() << endl;
}

int main()
{
    Dog d;
    Cat c;

    PrintAge(&d);
    PrintAge(&c);
}
#endif