// 22_복사생성자.cpp
#include <iostream>
using namespace std;

// 1. 사용자가 생성자를 아무것도 제공하지 않으면
//    컴파일러는 아무일도 수행하지 않는 기본 생성자를 제공합니다.

// 2. 사용자가 복사 생성자를 제공하지 않으면,
//    컴파일러는 자동으로 멤버를 복사하는 복사 생성자를 제공합니다.

class Point {
    int x;
    int y;

public:
    //----
    Point(const Point& rhs) // 복사 생성자 형태!
        : x(rhs.x)
        , y(rhs.y)
    {
        cout << "Point(const Point&)" << endl;
    }

    Point(int a, int b)
        : x(a)
        , y(b)
    {
    }

    void Print()
    {
        cout << x << ", " << y << endl;
    }
};

int main()
{
    Point pt1(10, 20);
    pt1.Print();

    Point pt2 = pt1;
    pt2.Print();
}