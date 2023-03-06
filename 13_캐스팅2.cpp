// 13_캐스팅2.cpp
#include <iostream>
using namespace std;

// C++은 캐스팅의 용도(목적)에 따라서, 4가지의 캐스팅 연산자를 제공합니다.
// 1. static_cast
//  : 가장 기본적인 C++ 캐스팅 연산자 입니다.
//    - 부동 소수점 타입을 정수로의 타입 변환할 때
//    - 더 넓은 표현범위를 가지는 정수 타입을 표현범위가 적은 정수 타입으로의 변환할 때
//    - void*를 구체적인 포인터 타입으로의 변환할 때
//   컴파일 타임에 캐스팅을 수행하기 때문에, staic_cast라고 합니다.
#if 0
int main()
{
    int* p = static_cast<int*>(malloc(sizeof(int)));

    double d = 3.14;
    int n { static_cast<int>(d) };

    long l = 42L;
    int n2 { static_cast<int>(l) };
}
#endif

// 2. reinterpret_cast
//  => 메모리를 재해석하는 용도로 사용합니다.
//     : 위험성
//  => static_cast가 실패하는 연산을 대상으로 많이 사용합니다.
#if 0
int main()
{
    int n = 0x12345678;
    char* pc = reinterpret_cast<char*>(&n);
    printf("%x %x %x %x\n", pc[0], pc[1], pc[2], pc[3]);

    // double* pd = reinterpret_cast<double*>(&n);
    // *pd = 3.14; /* 미정의 동작 */
}
#endif

// 3. const_cast
//  => 메모리의 상수성(const)를 제거하는 목적으로 사용합니다.
//   : 타입의 불일치 문제를 해결하기 위해 사용합니다.

void foo(char* s)
{
    printf("%s\n", s);
}

int main()
{
    const char* s = "hello";
    // foo(static_cast<char*>(s)); // const char* -> char*
    // foo(reinterpret_cast<char*>(s));
    foo(const_cast<char*>(s));
}