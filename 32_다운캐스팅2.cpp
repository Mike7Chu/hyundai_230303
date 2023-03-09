// 32_다운캐스팅2.cpp
#include <iostream>
using namespace std;

// 주의사항
// : RTTI / dynamic_cast
//  => 가상 함수 테이블안에 타입에 대한 정보가 저장되어 있습니다.
//  => 가상 소멸자 포함 가상 함수가 없는 경우, 컴파일 오류가 발생합니다.

class Animal {
public:
    virtual ~Animal() { }
    virtual void Cry() = 0;
};

class Dog : public Animal {
    int age = 100;

public:
    int GetAge() const { return age; }
    virtual void Cry() { }
};

int main()
{
    Dog d;
    Animal* p = &d;

    // 실패 가능성이 없는 다운 캐스팅입니다. => static_cast
    // Dog* pDog = static_cast<Dog*>(p);
    // cout << pDog->GetAge() << endl;

    // 실패 가능성이 있는 다운 캐스팅입니다.
    Dog* pDog = dynamic_cast<Dog*>(p);
    if (pDog) {
        cout << pDog->GetAge() << endl;
    }
}
