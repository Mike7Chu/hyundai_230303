// 0_QnA3.cpp
// void*
#include <stdio.h>

int main()
{
    // void*
    //  : 대상체 타입의 정보가 없습니다.
    // 1) 모든 주소를 저장할 수 있습니다.
    // 2) 포인터 연산을 수행할 수 없습니다.
    //   *p, p+1, p-1 ...
    // 3) 연산을 수행하기전에, 구체적인 타입으로의 캐스팅이 필요합니다.

    // double* p = NULL;
    // printf("%p\n", p + 1);

    int n = 10;
    int* p1 = &n;

    double d = 3.14;
    double* p2 = &d;

    void* p = &n;
    p = &d;

    double n2 = *(double*)p;
    printf("%lf\n", n2);
}