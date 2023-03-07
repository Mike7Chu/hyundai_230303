// 20_this.cpp
#include <iostream>
using namespace std;

class Point {
    int x;
    int y;

public:
    // void Set(Point* this, int a, int b)
    void Set(int a, int b)
    {
        this->x = a;
        this->y = b;
    }
};

int main()
{
    Point p1;
    Point p2;

    p1.Set(10, 20); // Point::Set(&p1, 10, 20);
    p2.Set(100, 200); // Point::Set(&p2, 100, 200);
}