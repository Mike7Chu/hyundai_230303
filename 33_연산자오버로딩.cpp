// 33_연산자오버로딩.cpp
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

    void Print() const
    {
        cout << x << ", " << y << endl;
    }

    // 멤버 함수
    //  : pt1.Add(pt2)
    // Point Add(Point* this, const Point& rhs)
    Point Add(const Point& rhs)
    {
        return Point(x + rhs.x, y + rhs.y);
    }

    // friend 일반 함수
    //  : Add(pt1, pt2)
    friend Point Add(const Point& lhs, const Point& rhs)
    {
        return Point(lhs.x + rhs.x, lhs.y + rhs.y);
    }
};

int main()
{
    Point pt1(10, 20);
    Point pt2(20, 30);

    // 1. 멤버 함수
    Point result1 = pt1.Add(pt2); // Point::Add(&pt1, pt2);
    result1.Print();

    // 2. 일반 함수
    Point result2 = Add(pt1, pt2);
    result2.Print();
}