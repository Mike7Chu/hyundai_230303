// 33_연산자오버로딩3.cpp
#include <iostream>
#include <cstdio>

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