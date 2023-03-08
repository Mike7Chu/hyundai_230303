// 28_상속2.cpp
#include <iostream>
using namespace std;

// 1. 상속하는 방법
// class Dog : public Animal  ===> 상속
// class Dog : <접근변경자> Animal
//  : 제한적으로 사용합니다.

// 2. Animal: 부모, Base, Super
//       Dog: 자식, Derived, Sub

class Animal {
    int age;
};

class Dog : public Animal {
    int color;
};
#if 0
class Dog {
  int age;   // Animal
  int color;
};

#endif

int main()
{
    cout << sizeof(Animal) << endl;
    cout << sizeof(Dog) << endl;
}