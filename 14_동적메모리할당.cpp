// 14_동적메모리할당.cpp
#include <iostream>
using namespace std;

// 1. malloc / free
//  => (자유)힙 영역에서 메모리를 할당/해지합니다.
//   1) 누수의 위험성
//   2) 할당/해지의 비용이 크다.

// 2. void* malloc(size) / free(void*)
//  => C++은 void*를 구체적인 포인터타입으로의 암묵적인 변환을 허용하지 않습니다.
//    : 명시적인 캐스팅이 필요합니다.

// 3. C++은 연산자로 제공합니다.
// 4. new 연산자
//    - 크기가 아닌 타입을 전달합니다.
//      전달된 타입을 가르키는 포인터 타입이 반환됩니다.
//      : 명시적인 캐스팅이 필요하지 않습니다.

// 5. delete 연산자
//    - new 를 통해 할당된 메모리를 해지할 수 있습니다.
//    - 연속된 메모리를 new를 통해 할당한 경우,
//      delete[] 연산자를 통해 해지해야 합니다. => 주의사항!!!

#if 0
int main()
{
    int* p1 = static_cast<int*>(malloc(sizeof(int)));
    free(p1);

    int* p2 = new int;
    delete p2;
}
#endif
#if 0
int main()
{
    int* p1 = static_cast<int*>(malloc(sizeof(int[10])));
    free(p1);

    int* p2 = new int[10]; // 연속된 메모리를 할당하는 방법
    delete[] p2;
}
#endif

int main()
{
    // int* p = static_cast<int*>(malloc(sizeof(int))); // 쓰레기값
    // cout << *p << endl; /* 쓰레기 값 */

    int* p1 = new int; // 쓰레기값
    delete p1;

    // p = new int(10);
    p1 = new int { 42 };
    cout << *p1 << endl;
    delete p1;

    int* p2 = new int[3] { 10, 20, 30 };
    cout << p2[0] << ", " << p2[1] << ", " << p2[2] << endl;
    delete[] p2;
}