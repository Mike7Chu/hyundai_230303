// 33_연산자오버로딩5.cpp
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

    friend ostream& operator<<(ostream& os, const Point& pt);
};

ostream& operator<<(ostream& os, const Point& pt)
{
    os << pt.x << ", " << pt.y;
    return os;
}

int main()
{
    Point pt(10, 20);
    cout << pt;
    // 1. 멤버 함수 => 사용자가 추가할 수 없습니다.
    // cout.operator<<(pt)
    // ostream& cout.operator<<(const Point&)

    // 2. 일반 함수 => 사용자 정의 타입에 대한 출력을 일반함수를 통해 제공하면 됩니다.
    // ostream& operator<<(cout, pt);

    cout << endl;
}