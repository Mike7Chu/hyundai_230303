// 29_다형성6.cpp
#include <iostream>
using namespace std;

// 1. 부모가 제공하는 가상함수만 오버라이딩 해야 합니다.

class Animal {
public:
    virtual void Go() { cout << "Animal Go" << endl; }
};

class Dog : public Animal {
public:
    // 모든 개는 Dog::Go를 통해 Go가 수행되어야 한다.
    //  - C++11, final 오버라이딩을 금지하는 키워드입니다.
    void Go() override final { cout << "Dog Go" << endl; }
};

class Pome : public Dog {
public:
    // void Go() override { cout << "Pome Go" << endl; }
};

int main()
{
    Animal a;
    Dog d;
    Pome d2;

    Animal* p = &d2;
    p->Go();
}