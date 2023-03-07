// 25_static.cpp
#include <iostream>
using namespace std;

#if 0
// 전역 변수는 접근 제어가 불가능합니다.
int cnt = 0;

class Car {
    int color;

public:
    Car() { cnt++; }
    ~Car() { cnt--; }
};

int main()
{
    Car cars[5];

    cout << cnt << endl;
}
#endif

class Car {
    int color;

public:
    static int cnt; // 선언

public:
    Car() { cnt++; }
    ~Car() { cnt--; }
};

int Car::cnt = 0; // 정의, 소스 파일에 정의됩니다.

// 정적 멤버 데이터는 클래스의 접근 제어 가능한 전역 변수 개념으로
// 이해해야 합니다.

int main()
{
    Car cars[5];

    cout << Car::cnt << endl;
}