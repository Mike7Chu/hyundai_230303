// 21_초기화리스트2.cpp
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
};

// 초기화 리스트를 반드시 제공해야 하는 경우
// 1. const
// 2. reference
// 3. 멤버 객체가 기본 생성자를 제공하지 않는 경우

class Rect {
    Point leftTop;
    Point rightBottom;

public:
    // Rect() : leftTop(), rightBottom() {}
    Rect()
        : leftTop(0, 0)
        , rightBottom(10, 10)
    {
    }

    Rect(int x1, int y1, int x2, int y2)
        : leftTop(x1, y1)
        , rightBottom(x2, y2)
    {
    }
};

int main()
{
    Rect r;
}