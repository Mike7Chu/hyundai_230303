// 26_상수멤버함수2.cpp
#include <iostream>
using namespace std;

class Point {
    int x;
    int y;

public:
    // 값을 변경하지 않는 멤버 함수는 상수 멤버 함수로 제공해야 합니다.
    void Print() const { cout << x << ", " << y << endl; }

    void Move(int a, int b)
    {
        x = a;
        y = b;
    }
};

#if 0
class Rect {
    Point leftTop;

public:
    Rect() { }

    // Point -> const Point
    const Point& GetLeftTop() const { return leftTop; }

    // 비상수 멤버 함수도 동시에 제공할 수 있습니다.
    Point& GetLeftTop() { return leftTop; }
};

int main()
{
    const Rect r;
    const Point& p = r.GetLeftTop();
    p.Print();

    Rect r2;
    Point& p2 = r2.GetLeftTop();
    p2.Move(10, 20); // !!!!
    p2.Print();
}
#endif

class Rect {
    Point leftTop;

public:
    Rect() { }

    // 값으로 반환할 때는 비상수 멤버 버전을 동시에 제공할 필요가
    // 없습니다.
    Point GetLeftTop() const { return leftTop; }
};

int main()
{
}

#if 0
int main()
{
    int n = 10;
    int& r = n;
    int* p = &n;

    const int c = 42;
    const int& r2 = c;
    const int* p2 = &c;
}
#endif