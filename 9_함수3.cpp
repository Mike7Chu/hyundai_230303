// 9_함수3.cpp
#include <iostream>
using namespace std;

// int foo() { }
// 1. 인자정보가 동일하고, 반환값이 다른 경우,
//   오버로딩이 허용되지 않습니다.

// 2. 기본 파라미터와 사용할 때, 주의가 필요합니다.

void foo(int n = 100) { cout << n << endl; }
void foo() { cout << "void" << endl; }

int main()
{
    // foo();
    // 9_함수3.cpp:14:5: error: call to 'foo' is ambiguous
}