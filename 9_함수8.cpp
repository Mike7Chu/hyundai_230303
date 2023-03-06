// 9_함수8.cpp
#include <iostream>
using namespace std;

#if 0
int add(int a, int b) { return a + b; }

// typedef int (*PARR3)[3];
using PARR3 = int (*)[3];

// int (*foo())[3]
PARR3 foo()
{
    static int x[3];
    return &x; // int(*)[3]
}
#endif

// C++11, 함수를 만드는 새로운 방법이 도입되었습니다.
//  "Trailing Return Type"

auto add(int a, int b) -> int { return a + b; }
auto foo() -> int (*)[3]
{
    static int x[3];
    return &x; // int(*)[3]
}

int main()
{
    cout << add(10, 20) << endl;
}