// 0_QnA5.cpp
#include <iostream>
using namespace std;

// 1. 사용자가 생성자를 아무것도 제공하지 않으면,
//    컴파일러는 아무일도 하지 않는 인자 없는 생성자를 제공합니다.
//    => 기본 생성자

// 2. 사용자가 생성자를 1개라도 제공하면, 컴파일러는 기본 생성자를 제공하지 않습니다.
#if 0
class Point {
public:
    Point(int a, int b) { }
};

int main()
{
    Point pt; // Point::Point()
}
#endif

// 3. 생성자는 오버로딩이 가능합니다.
//  => 객체를 생성하는 다양한 방법을 제공할 수 있습니다.
//   Point pt;         ---> Point::Point()
//   Point pt(10, 20); ---> Point::Point(int, int)
#if 0
class Point {
    int x;
    int y;

public:
    Point()
        : x(0)
        , y(0)
    {
    }

    Point(int a, int b)
        : x(a)
        , y(b)
    {
    }
};

int main()
{
    Point* pt = static_cast<Point*>(malloc(sizeof(Point)));
    // malloc은 생성자가 호출되지 않습니다.

    Point* pt2 = new Point;
    // 1. 메모리 할당
    // 2. 할당된 메모리에 대해서 생성자가 호출됩니다.(객체)

    free(pt);
    // 소멸자가 호출되지 않습니다.

    delete pt2;
    // 1. 할당된 메모리에 대한 소멸자가 호출됩니다.(객체)
    // 2. 메모리 해지
}
#endif

#if 0
class Sample {
public:
    Sample() { cout << "Sample()" << endl; }
    Sample(int) { cout << "Sample(int)" << endl; }
};

int main()
{
    // Sample* p = new Sample[3];
    Sample* p = new Sample[3] {
        { 10 }, {}, { 30 }
    };
}
#endif

#include <string>

class User {
    string name_;
    int age_;
    string address_;

public:
#if 0
    User()
        : name_("")
        , age_(0)
        , address_("")
    {
    }
#endif
    User() // - 2
        : User("", 0, "") // - 3, 위임 생성자(C++11)
    {
        // - 5
    }

    User(const string& name, int age, const string& address) // - 4
        : name_(name)
        , age_(age)
        , address_(address)
    {
    }
};

int main()
{
    User user; // User::User() - 1
}