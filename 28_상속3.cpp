// 28_상속3.cpp
#include <iostream>
using namespace std;

// 1. 부모의 private은 자식 클래스에서 접근이 불가능합니다.

// 2. protected
//  : 외부에서 접근이 불가능하지만, 자식 클래스를 통해서는 접근이 가능합니다.

// 3. 접근 지정자 3개
//  1. private: 외부 접근 불가능, friend 선언된 클래스/함수 가능
//  2. protected: 외부 접근 불가능, 자식 클래스 접근 가능
//  3. public: 외부 접근 가능

class Animal {
protected:
    int age;
};

class Dog : public Animal {
    int color;

public:
    void PrintAge() const
    {
        cout << age << endl;
    }
};

int main()
{
    Dog d;
    d.PrintAge();

    // cout << d.age << endl;
}