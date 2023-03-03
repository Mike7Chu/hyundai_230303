// 4_변수5.cpp
#include <iostream>
using namespace std;

// decltype
//  : 초기화 없이, 지정된 변수와 동일한 타입의 변수를 만들 수 있습니다.

int main()
{
    int n;
    decltype(n) n2; // n과 동일한 타입으로 만들고 싶습니다.
    // int n2;

    int x[3]; // int[3]
    decltype(x) y; // int[3];

    y[0] = 10;
    y[1] = 20;
}