// 9_함수5.cpp
#include <iostream>
using namespace std;

// 1. inline 키워드를 사용해도, 인라인화 여부는
//    컴파일러가 결정합니다.
//  MSVC: /Ob1

// 2. 인라인 최적화를 통해 호출되지 않는 함수의 기계어 코드는
//    사라집니다.

// 3. 인라인 함수는 코드 메모리 사용량 증가의 원인이 될 수 있습니다.
//   > 간결한 함수에 대한 인라인 치환이 좋습니다.

inline int add(int a, int b) { return a + b; }

int main()
{
    int result;

    result = add(10, 20);
}