// 30_가상함수의원리.cpp
#include <iostream>
using namespace std;

class Animal {
    int age;

public:
    virtual void go() { }
};

class Dog : public Animal {
    int color;
    int speed;
};

int main()
{
    cout << sizeof(Animal) << endl;
    cout << sizeof(Dog) << endl;
}