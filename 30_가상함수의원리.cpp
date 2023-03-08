// 30_가상함수의원리.cpp
#include <iostream>
using namespace std;

// 1. 클래스에 가상 함수가 1개라도 존재하면,
//    객체의 멤버로 가상함수 테이블을 참조하는 포인터 멤버가 추가됩니다.

// 2. 가상 함수 비용
//  1) 가상 함수를 가지는 모든 객체의 크기가 포인터 크기 만큼 늘어납니다.
//  2) 가상 함수를 가지는 모든 클래스는 자신만의 가상함수 테이블이 필요합니다.
//  3) 가상 함수 테이블의 크기는 가상 함수 개수만큼 늘어납니다.

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