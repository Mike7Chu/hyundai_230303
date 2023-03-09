// 33_연산자오버로딩6.cpp
#include <iostream>
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

using namespace std;

int main()
{
}