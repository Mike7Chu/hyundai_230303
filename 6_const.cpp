// 6_const.cpp
#include <iostream>
using namespace std;

// https://godbolt.org/

// 1. C++에서 const 변수는 반드시 초기화가 필요합니다.

// 2. 상수
//  1) 컴파일 타임 상수
//    > 컴파일 타임에 상수값이 결정되어야 합니다.
//      상수에 대한 접근에 대해서 메모리를 이용하지 않습니다.

//  2) 런타임 상수
//    > 상수의 값이 실행시간에 결정됩니다.
//      상수에 대한 접근은 메모리로부터 이루어집니다.

// C++11 constexpr - 컴파일 타임 상수

int main()
{
    constexpr int c = 10; // const int
    printf("%d\n", c);

    int n = 10;
    cin >> n;
    // constexpr int c2 = n; => 오류! 런타임 상수 입니다.
    const int c2 = n;
}