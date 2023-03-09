// 33_연산자오버로딩7.cpp
#include <iostream>
using namespace std;

// 정수의 역활을 수행하는 클래스를 만들어봅시다.
class Integer {
    int value;

public:
    inline Integer(int v = 0)
        : value(v)
    {
    }

    // ++i
    inline Integer& operator++()
    {
        ++value;
        return *this;
    }

    // i++
    inline Integer operator++(int)
    {
        Integer temp(*this); // 현재의 상태를 복사 생성 합니다.
        ++value;

        return temp;
    }

    friend inline ostream& operator<<(ostream& os, const Integer& i)
    {
        return os << i.value;
    }
};

int main()
{
    int n1 = 1;
    ++n1;
    /*
        mov     DWORD PTR n1$[rsp], 1
        mov     eax, DWORD PTR n1$[rsp]
        inc     eax
        mov     DWORD PTR n1$[rsp], eax
    */

    n1++;
    cout << n1 << endl;

    Integer n2 = 1;
    ++n2;
    /*
        mov     DWORD PTR n2$[rsp], 1
        mov     eax, DWORD PTR n2$[rsp]
        inc     eax
        mov     DWORD PTR n2$[rsp], eax
    */

    // n2.operator++() {}

    n2++;
    // n2.operator++(int)
    cout << n2 << endl;
}

/*
for (int i = 0 ; i < 10; i++) // C

for (int i = 0 ; i < 10; ++i) // C++

*/