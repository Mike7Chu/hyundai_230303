// 25_static.cpp
#include <iostream>
using namespace std;

#if 0
class Car {
    int color;

public:
    static int cnt; // 선언

public:
    Car() { cnt++; }
    ~Car() { cnt--; }
};

int Car::cnt = 0; // 정의, 소스 파일에 정의됩니다.

int main()
{
    Car c;

    // 정적 멤버 데이터에 접근하는 방법 2가지
    // 1. 클래스이름::
    cout << Car::cnt << endl;

    // 2. 객체.
    cout << c.cnt << endl;
}
#endif

class Car {
    int color;

    // 정적 멤버 데이터
    static int cnt; // 선언

public:
    Car() { cnt++; }
    ~Car() { cnt--; }

    // 정적 멤버 함수 / 정적(클래스) 메소드
    static int GetCount() { return cnt; }
};

int Car::cnt = 0;

int main()
{
    // 정적 멤버 함수를 호출하는 방법
    // 1. 클래스::
    cout << Car::GetCount() << endl;

    // 2. 객체.
    Car c;
    cout << c.GetCount() << endl;
    // cout << c.cnt << endl;
    // cout << Car::cnt << endl;
}