// 12_레퍼런스3.cpp

#include <iostream>
using namespace std;

// 1. 레퍼런스 타입은 반드시 초기화가 필요합니다.
//  : NULL을 지정할 수 없습니다.

int main()
{
    int* p = NULL; // 유효하지 않다.
    if (p) {
        *p = 42;
    }

    int n;
    // int& r;  - 에러!
    int& r = n;
}