// 33_연산자오버로딩5.cpp
#include <iostream>
#include <string>
using namespace std;

#if 0
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
    friend istream& operator>>(istream& is, Point& pt);
};

// 사용자 정의 타입에 대해서
// 표준 입출력 객체를 통해 값을 입력 받거나, 출력하는 것이 가능합니다.
// => 중요합니다!
ostream& operator<<(ostream& os, const Point& pt)
{
    os << pt.x << ", " << pt.y;
    return os;
}

istream& operator>>(istream& is, Point& pt)
{
    is >> pt.x >> pt.y;
    return is;
}

int main()
{
    Point pt(10, 20);
    cin >> pt;
    // cin.operator>>(pt)
    // cin.operator>>(Point&) => 멤버 함수는 제공 불가능합니다.

    // istream& operator>>(cin, Point&)

    cout << pt;
    // 1. 멤버 함수 => 사용자가 추가할 수 없습니다.
    // cout.operator<<(pt)
    // ostream& cout.operator<<(const Point&)

    // 2. 일반 함수 => 사용자 정의 타입에 대한 출력을 일반함수를 통해 제공하면 됩니다.
    // ostream& operator<<(cout, pt);

    cout << endl;
}
#endif

class User {
    string name;
    int age;

public:
    User(const string& s, int n)
        : name(s)
        , age(n)
    {
    }
};

int main()
{
    User user("Tom", 42);
    cin >> user;
    cout << user << endl;
}