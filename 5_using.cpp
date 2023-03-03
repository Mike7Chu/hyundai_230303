// 5_using.cpp
#include <iostream>
using namespace std;

// using
// 1. namespace
//   - using 선언
//     using std::cout;
//   - using 지시어
//     using namespace std;

// 2. C++11, Type Aliasing
//  => 가독성
//  => typedef 문제점 해결
//    1) 직관적이지 않다.
//    2) 템플릿 타입에 대한 별칭이 불가능합니다. - *

// typedef int ARR3[3]; // int[3]
// typedef int (*PARR3)[3]; // int(*)[3]

using ARR3 = int[3];
using PARR3 = int (*)[3];

int main()
{
    ARR3 x; // int[3]
    PARR3 p = &x;
}
