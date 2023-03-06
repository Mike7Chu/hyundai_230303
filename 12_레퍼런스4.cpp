// 12_레퍼런스4.cpp
#include <iostream>
using namespace std;

// 레퍼런스 타입
// 1. & - lvalue reference
//  : lvalue만 참조 가능합니다.  => int&

// 2. const& - const lvalue reference
//  : lvalue, rvalue, const lvalue 참조가 가능합니다.

// 3. C++11, rvalue reference => int&&
//  : rvalue만 참조 가능합니다.

// void foo(int& r)
// {
//     cout << "lvalue" << endl;
// }

void foo(const int& r)
{
    cout << "const lvalue" << endl;
}

void foo(int&& r)
{
    cout << "rvalue" << endl;
}
// 핵심: lvalue와 rvalue를 구분해서 처리할 수 있습니다.
//    rvalue에서 불필요한 메모리 복사를 제거하는 형태로 최적화할 수 있습니다.

int main()
{
    int n = 10;
    foo(n);

    foo(10);
}

#if 0
int main()
{
    int n;

    n = 3;
    // lvalue: 왼쪽에 올수있는 값
    // rvalue: 왼쪽에 올수없는 값

    int& r1 = n; /* OK */
    // int& r2 = 3; /* NO, rvalue는 참조 불가능합니다. */

    const int& r2 = 3; /* OK */
}
#endif