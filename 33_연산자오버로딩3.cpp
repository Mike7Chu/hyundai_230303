// 33_연산자오버로딩3.cpp
#include <iostream>
#include <cstdio>

// 1. cout은 ostream 타입의 객체 입니다.
// 2. 연산자 오버로딩(operator<<)을 통해 제공되는 멤버 함수를 통해 출력합니다.
// 3. 자기 자신의 참조를 반환해서, 연쇄적으로 멤버 함수를 호출할 수 있습니다.

namespace xstd {
class ostream {
public:
    ostream& operator<<(int n)
    {
        printf("%d", n);
        return *this;
    }
    ostream& operator<<(char ch)
    {
        printf("%c", ch);
        return *this;
    }
};
ostream cout;
}

using namespace xstd;

int main()
{
    int n = 42;
    char c = 'A';

    cout << n;
    // cout.operator<<(n);
    // cout.operator<<(int)

    cout << c;
    // cout.operator<<(c);
    // cout.operator<<(char)

    cout << n << c;
    // cout.operator<<(n).operator<<(c);
}