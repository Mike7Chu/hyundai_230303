// 7_struct.cpp
#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
    double z;
};

int main()
{
    Point pt = { 10, 20 };

    // cout << pt.x << ", " << pt.y << endl;
    int x = pt.x;
    int y = pt.y;
    double z = pt.z;
    cout << x << ", " << y << ", " << z << endl;

    // C++17, Structured Binding 선언
    // 1) auto를 반드시 사용해야 합니다.
    auto [a, b, c] = pt;
    cout << a << ", " << b << ", " << c << endl;
}