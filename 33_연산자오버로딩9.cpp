// 33_연산자오버로딩9.cpp
#include <iostream>
using namespace std;

// 1. 컴파일러가 사용자가 복사 생성자를 제공하지 않으면,
//    멤버 복사를 수행하는 복사 생성자를 제공합니다.

// 2. 컴파일러가 사용자가 대입 연산자 오버로딩을 제공하지 않으면
//    멤버 복사를 수행하는 대입 연산자를 제공합니다.

class Point {
    int x;
    int y;

public:
    // 컴파일러가 제공하는 복사 생성자
    Point(const Point& rhs)
        : x(rhs.x)
        , y(rhs.y)
    {
        cout << "Point(const Point&)" << endl;
    }

    // 대입 연산자도 자기 자신의 참조를 결과로 반환합니다.
    Point& operator=(const Point& rhs)
    {
        cout << "operator=(const Point&)" << endl;
        x = rhs.x;
        y = rhs.y;

        return *this;
    }

    Point(int a, int b)
        : x(a)
        , y(b)
    {
    }
};

int main()
{
    int a, b, c;
    a = b = c = 10;
    // a = b = (c = 10);
    // a = (b = c)
    // (a = b)
    // a

    (a = 10) = 20;
    cout << a << endl;

    Point p1(10, 20);
    Point p2(p1);
    // Point p2 = p1;

    p2 = p1; // 대입 연산자
    // p2.operator=(p1)
}