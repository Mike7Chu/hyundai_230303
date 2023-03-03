// 9_함수4.cpp
#include <iostream>
using namespace std;

#if 0
int square(int x) { return x * x; }

int main()
{
    cout << square(10) << endl;
    cout << 10 * 10 << endl;
}
#endif

// 1. C 에서는 함수 호출을 최적화하기 위해서,
//    매크로 함수를 사용합니다.
#define SQUARE(x) ((x) * (x))
#define DBL(x) ((x) + (x))

//  - 우선순위 문제가 발생할 수 있습니다.
//   => 매크로의 인자 영역과 치환 영역을 괄호를 통해
//      해결할 수 있습니다.

#if 0
int main()
{
    int a = 10;

    cout << SQUARE(10) << endl;
    cout << SQUARE(a + a) << endl;

    cout << DBL(a) * DBL(a) << endl;
    // (a) + (a) * (a) + (a)
}
#endif

int main()
{
    int a = 10;
    cout << SQUARE(++a) << endl;
    // ((++a) * (++a)): 미정의 동작
    // > 매크로 함수를 통해서는 해결할 수 없습니다.
    //   매크로 함수를 사용할 때, 다중 부수효과로 인한 미정의 동작
    //   여부를 항상 주의해야 합니다.
}