// 23_위임생성자.cpp
#include <iostream>
using namespace std;

#if 0
class Point {
    int x;
    int y;

    void init1() { }
    void init2() { }

public:
    Point()
        : x(0)
        , y(0)
    {
        init1();
        init2();
    }

    Point(int a, int b)
        : x(a)
        , y(b)
    {
        init1();
        init2();
    }
};
#endif

// 위임 생성자
// 정의 : 자신의 다른 생성자를 통해 객체를 초기화할 수 있습니다.
// 1) 생성자 코드의 중복을 제거할 수 있습니다.
// 2) 초기화리스트에서 사용해야 합니다.

class Point {
    int x;
    int y;

    void init1() { }
    void init2() { }

public:
    Point()
        : Point(0, 0) // 위임 생성자, C++11
    {
    }

    Point(int a, int b)
        : x(a)
        , y(b)
    {
        init1();
        init2();
    }
};

int main()
{
    Point pt;
}