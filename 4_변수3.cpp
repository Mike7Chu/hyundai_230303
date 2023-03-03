// 4_변수3.cpp
#include <iostream>
using namespace std;

// 핵심: Uniform initialization은
//  부동 소수점을 정수로의 암묵적인 변환,
//  더 큰 표현범위의 정수가 더 작은 표현범위의 정수로의 암묵적인 변환을
// 허용하지 않습니다.
//    -> Preventing Narrow

int main()
{
    double d = 3.14;
    // 부동 소수점 타입이 정수 타입으로의 암묵적인 변환이 허용됩니다.
    // int n = d;
    // int n(d);

    // int n = { (int)d };
    int n { (int)d };

    // 더 큰 표현범위를 가지는 정수가 더 작은 표현범위를 가지는 정수로의
    // 암묵적인 변환이 허용됩니다.
    long long ll = 42LL;

    // int n2 = ll;
    // int n2(ll);

    // int n2 = { (int)ll };
    int n2 { (int)ll };
}