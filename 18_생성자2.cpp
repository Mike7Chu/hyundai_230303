// 18_생성자2.cpp
#include <iostream>
using namespace std;

class Point {
public:
    Point() { cout << "Point()" << endl; }
    Point(int a, int b) { cout << "Point(int, int)" << endl; }
    ~Point() { cout << "~Point()" << endl; }
};

// 1. malloc을 통해 객체를 생성할 경우,
//    생성자가 호출되지 않습니다.

// 2. new를 통해서 객체를 생성할 경우,
//    생성자가 호출됩니다.

// 3. free를 통해서 객체의 메모리를 파괴할 경우, 소멸자가 호출되지 않습니다.
// 4. delete를 통해서 객체의 메모리를 파괴할 경우, 소멸자가 호출됩니다.

// new
// 1) 메모리 할당
// 2) 할당된 메모리에 대한 생성자 호출(객체)

// delete
// 1) 할당된 메모리를 대상으로 소멸자 호출(객체)
// 2) 메모리 해지

int main()
{
    Point* p1 = static_cast<Point*>(malloc(sizeof(Point)));
    free(p1);

    // Point* p2 = new Point;
    Point* p2 = new Point(10, 20);
    delete p2;

    Point* p3 = new Point[3] {
        { 10, 20 },
        {},
        { 10, 20 },
    };
    delete[] p3;
}