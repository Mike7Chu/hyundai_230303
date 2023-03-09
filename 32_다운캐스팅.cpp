// 32_다운캐스팅.cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual ~Animal() { }
};

class Dog : public Animal {
    int age = 100;

public:
    int GetAge() const { return age; }
};

int main()
{
    Animal a;
    Dog d;

    Animal* p = &d;

    // 부모의 포인터를 통해 참조되는 자식 클래스의 기능을 이용하기 위해서는
    // 다운 캐스팅이 필요합니다.
    // Dog* pDog = p; /* 컴파일 오류 */
    // 암묵적인 변환을 허용하지 않습니다.
    // => 명시적인 캐스팅이 필요합니다.

    // p가 Dog 타입인지 체크해야 합니다.
    // : RTTI(Run Time Type Information)
    // 1. type_info 구조체
    //   - 타입의 정보를 담고 있습니다.
    // 2. typeid 연산자: type_info 구조체를 얻을 수 있습니다.
    //   1) 클래스
    //    typeid(Dog)
    //   2) 객체
    //    typeid(*p)
    if (typeid(Dog) == typeid(*p)) {
        Dog* pDog = static_cast<Dog*>(p);
        cout << pDog->GetAge() << endl;
    } else {
        cout << "Dog 타입이 아닙니다." << endl;
    }

    // dynamic_cast
    // : 런타임에 타입을 조사해서, 캐스팅이 불가능하면
    //   nullptr 을 반환합니다.
    Dog* pDog = dynamic_cast<Dog*>(p);
    if (pDog) {
        cout << pDog->GetAge() << endl;
    } else {
        cout << "Dog 타입이 아닙니다." << endl;
    }
}