// 20_this.cpp
#include <iostream>
using namespace std;

// this: 멤버 함수를 통해 전달되는 객체의 주소 입니다.
class Point {
    int x;
    int y;

public:
    // void Set(Point* this, int a, int b)
    void Set(int a, int b)
    {
        x = a;
        // this->x = a;
        y = b;
        // this->y = b;
    }

    void Set2(int x, int y)
    {
    }
};

int n = 100;
int g_n = 100;

void foo()
{
    int n = 42; // Shadowing

    cout << ::n << endl;
    // C++에서 전역 공간을 명시적으로 접근하는 방법.
}

int main()
{
    foo();

    Point p1;
    Point p2;

    p1.Set(10, 20); // Point::Set(&p1, 10, 20);
    p2.Set(100, 200); // Point::Set(&p2, 100, 200);
}