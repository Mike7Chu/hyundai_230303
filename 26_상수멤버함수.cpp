// 26_상수멤버함수.cpp
#include <iostream>
using namespace std;

class Point {
    int x;
    int y;

public:
    Point(int a, int b)
        : x(a)
        , y(b)
    {
    }

    // 상수 멤버 함수
    // : 멤버 함수 내에서 멤버 데이터의 값을 변경할 수 없습니다.
    // - 상수 멤버 함수는 멤버 데이터를 상수 취급합니다.
    // int x ---> const int x;
    // int y ---> const int y;

    // - 상수 멤버 함수는 상수 객체와 상수 객체 참조를 통해서
    //   호출이 가능합니다.
    void Print() const
    {
        // x = 10;
        cout << x << ", " << y << endl;
    }
};

// void foo(Point p)
void foo(const Point& p)
{
    p.Print();
}

int main()
{
    Point pt(10, 20);
    pt.Print();

    const Point pt2(10, 20);
    pt2.Print();

    foo(pt);
}