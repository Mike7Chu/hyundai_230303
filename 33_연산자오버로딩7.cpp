// 33_연산자오버로딩7.cpp
#include <iostream>
using namespace std;

// 정수의 역활을 수행하는 클래스를 만들어봅시다.
class Integer {
    int value;

public:
    Integer(int v = 0)
        : value(v)
    {
    }

    // ++i
    Integer& operator++()
    {
        ++value;
        return *this;
    }

    // i++
    Integer operator++(int)
    {
        Integer temp(*this); // 현재의 상태를 복사 생성 합니다.
        ++value;

        return temp;
    }

    friend ostream& operator<<(ostream& os, const Integer& i)
    {
        return os << i.value;
    }
};

int main()
{
    int n1 = 1;
    ++n1;
    n1++;
    cout << n1 << endl;

    Integer n2 = 1;
    ++n2;
    // n2.operator++() {}

    n2++;
    // n2.operator++(int)
    cout << n2 << endl;
}

/*
for (int i = 0 ; i < 10; i++) // C

for (int i = 0 ; i < 10; ++i) // C++

*/