// 4_변수4.cpp
#include <iostream>
using namespace std;

// 배열의 이름은 배열의 첫번째 원소의 시작 주소로 해석됩니다.
// => Decay
// (예외)
// 1. sizeof
// 2. &
#if 0
int main()
{
    int n = 10; // int
    int x[3]; // int[3]

    int* p = x; // &x[0]
    int(*p2)[3] = &x;

    printf("%zu %zu\n", sizeof(n), sizeof(int));
    printf("%zu %zu\n", sizeof(x), sizeof(int[3]));
}
#endif

// C++11: auto
// : '컴파일 타임'에 우항의 타입을 기반으로 변수의 타입을 결정합니다.
//  주의사항: 반드시 초기화가 필요합니다.
#if 0
int main()
{
    int x[3]; // int[3]

    // int* p1 = x;
    // int(*p2)[3] = &x;

    auto p1 = x;
    auto p2 = &x;

    // auto p3; => 허용되지 않습니다.
}
#endif

// "주의"
// auto는 우항의 타입과 동일한 타입으로 결정되는 것이 아니라
// 우항의 타입을 통해 추론합니다.
int main()
{
    const int c = 10; // const int

    // auto x = c; // x -> int
    const auto x = c;
    // x = 100; /* compile error */
}