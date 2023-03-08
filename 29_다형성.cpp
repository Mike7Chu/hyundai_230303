// 29_다형성.cpp
#include <iostream>
using namespace std;

class Animal { };
class Dog : public Animal { };

// 1. 부모 포인터(참조) 타입을 통해, 자식 객체를 참조할 수 있습니다.
//  "자식의 주소(참조) 타입은 부모의 주소(참조) 타입으로의 암묵적인 변환을
//   허용합니다."
//   - Upcasting

// 2. 부모와 자식은 is-a 관계가 성립합니다.
//    <자식 클래스> is a <부모 클래스>
//     Dog is an Animal

int main()
{
    Animal a;
    Dog d;

    Animal* pa = &d; /* OK */
    Animal& r = d; /* OK */

    // Dog* pd = pa; /* 다운 캐스팅은 허용되지 않습니다 .*/
}

#if 0
class Animal { };
class Dog { };


int main()
{
    Animal a;
    Dog d;

    Animal* pa = &a;
    Dog* pd = &d;

    Animal* pa2 = &d; /* 허용 X */
    Dog* pd2 = &a; /* 허용 X */
}
#endif