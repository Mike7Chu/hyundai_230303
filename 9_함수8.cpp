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

// auto add(int a, int b) -> int { return a + b; }
// auto foo() -> int (*)[3]
auto foo()
{
    static int x[3];
    return &x; // int(*)[3]
}

// 1. 직관적이다.
// 2. 반환 타입을 추론합니다.
// 3. decltype을 통해 반환 타입을 결정할 수 있습니다.

// decltype(a+b) add(int a, int b) { return a + b; }
// auto add(int a, int b) -> decltype(a + b) { return a + b; }
auto add(int a, int b) -> int { return a + b; }

// int (*goo())(int, int)
// auto goo() -> int (*)(int, int)
auto goo()
{
    return &add; // int(*)(int, int)
}

int main()
{
    cout << add(10, 20) << endl;
}

//  int (*goo())(int, int)

// 1. goo()
//  : goo는 인자 없는 함수 입니다. 반환 타입은?
// 2. (*goo())
//  : 포인터 입니다. 포인터가 가르키는 것은?
// 3. (*goo())(int, int)
//  : 정수 인자 2개 받는 함수 입니다. 반환 타입은?
// 4. int (*goo())(int, int)
//  : int 입니다.

//------
// int (*foo())[3]
// 1. foo()
//   : foo는 인자 없는 함수입니다. 반환 타입은?
// 2. (*foo())
//   : 포인터 입니다. 포인터가 가르키는 것은?
// 3. (*foo())[3]
//   : 3개짜리 배열입니다. 한개의 원소타입은?
// 4. int (*foo())[3]
//   : int 입니다.

// B언어: 켄 톰슨
// C언어: 데니스 리치
// Google -> Go
