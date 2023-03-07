// 9_함수7.cpp
#include <iostream>
using namespace std;

// 최대 공약수
// > 이 함수는 정수를 대상으로 설계된 함수입니다.
int gcd(int a, int b)
{
    return b != 0 ? gcd(b, a % b) : a;
}

#if 0
double gcd(double a, double b)
{
    abort(); // 프로세스를 비정상 종료
}
#endif

// 1. 선언만 합니다. => 링크 오류를 통해 함수 호출을 금지하는 의도
// double gcd(double a, double b);
/*
Undefined symbols for architecture arm64:
  "gcd(double, double)",
*/

// 2. C++11에서 함수 호출을 금지하는 문법이 도입되었습니다.
//  => Delete function
double gcd(double a, double b) = delete;
/*
9_함수7.cpp:35:13: error: call to deleted function 'gcd'
    cout << gcd(3.14, 5.5) << endl;
*/

int main()
{
    cout << gcd(15, 12) << endl;
    cout << gcd(25, 15) << endl;

    // cout << gcd(3.14, 5.5) << endl; => 컴파일 오류!
}