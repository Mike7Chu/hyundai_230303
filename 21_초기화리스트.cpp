// 21_초기화리스트.cpp
#include <iostream>
using namespace std;

// 초기화 vs 대입
//  1. 초기화와 대입의 차이점을 이해하는 것이 중요합니다.
//  2. C++에서 반드시 초기화가 필요한 것 3가지
//    1) auto
//    2) const
//    3) reference

//  3. 멤버 데이터에 const / reference 타입이 있다면,
//     생성자를 통해, 초기화 해주어야 합니다.
//      => 초기화리스트

//  4. 초기화리스트는 생성자에서만 사용 가능합니다.

class Sample {
    const int x;
    int& y;

public:
    Sample(int a, int& b)
        : x(a)
        , y(b)
    {
        // x = a; // 대입입니다.
        // y = b;
    }
};

int main()
{
}

#if 0
int main()
{
    // const int c;
    // int& r;

    int n = 10;

    int a;
    a = 10;
}
#endif