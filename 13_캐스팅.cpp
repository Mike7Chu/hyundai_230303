// 13_캐스팅.cpp
#include <iostream>
using namespace std;

// 캐스팅: 명시적으로 타입간의 변환을 수행할 때 사용합니다.

#include <cstdlib> // malloc, free
//  void* malloc(size_t size);

void foo(char* s)
{
    printf("%s\n", s);
}

int main()
{
    double d = 3.14;
    int n1 = { (int)d };

    long l = 42L;
    int n2 = { (int)l };

    int* p = (int*)malloc(sizeof(int));
    // C는 void*를 구체적인 포인터 타입으로의 암묵적인 변환을 허용하지만,
    // C++은 명시적인 캐스팅이 필요합니다.

    int x = 0x12345678;
    // [ 0x78 ][ 0x56 ][ 0x34 ][ 0x12 ] - Little endian
    // [ 0x12 ][ 0x34 ][ 0x56 ][ 0x78 ] - Big endian

    char* pc = (char*)&x; // 메모리 재해석
    printf("%x %x %x %x\n", pc[0], pc[1], pc[2], pc[3]);

    const char* s = "hello";
    foo((char*)s); // const char* -> char*, 타입의 불일치 문제 해결
}