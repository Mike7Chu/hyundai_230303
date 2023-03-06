// 15_nullptr.cpp
#include <iostream>
using namespace std;

// #define NULL (void*)0

// 1. 정수 0은 포인터 타입으로의 암묵적인 변환이 허용됩니다.
// 2. NULL은 정수인지 포인터인지 모호합니다.
//    "타입 안정성이 떨어집니다."
// 3. C++11에서 NULL을 대체하는 nullptr이 도입되었습니다.

void foo(int n) { cout << "int" << endl; }
void foo(int* p) { cout << "int*" << endl; }

int main()
{
    foo(0);
    // foo(NULL); /* 모호성 오류! */
    foo(nullptr);

    // int* p = 0;
    // int* p = NULL;
}