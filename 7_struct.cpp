// 7_struct.cpp
#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
    double z;
    // double xx;
};

struct Rect {
    Point leftTop;
    Point rightBottom;
};

int main()
{
    Rect r = {};
    Point pt = { 10, 20 };

    auto [lt, rb] = r;
    cout << lt.x << endl;

    // cout << pt.x << ", " << pt.y << endl;
    int x = pt.x;
    int y = pt.y;
    double z = pt.z;
    cout << x << ", " << y << ", " << z << endl;

    // C++17, Structured Binding 선언
    // 1) auto를 반드시 사용해야 합니다.
    // 2) 멤버 데이터 개수와 동일하게 선언되어야 합니다.
    auto [a, b, c] = pt;
    cout << a << ", " << b << ", " << c << endl;

    // 3) 배열에서도 사용 가능합니다.
    int arr[3] = { 10, 20, 30 };
    auto [x1, x2, x3] = arr;
    cout << x1 << ", " << x2 << ", " << x3 << endl;
}