// 9_함수6.cpp
#include <iostream>
using namespace std;

// STL(Standard Template Libarary)

// int square(int x) { return x * x; }
// double square(double x) { return x * x; }
// float square(float x) { return x * x; }
// long long square(long long x) { return x * x; }

// > 타입만 다르고, 알고리즘은 동일합니다.
// => 컴파일러가 전달된 인자를 기반으로 함수를 자동으로 생성하는 기술을
//    이용하면 편리합니다.
//   "Template"
//   1) 사용자가 관리해야 하는 코드의 양을 줄일 수 있습니다.
//   2) 컴파일 속도가 오래 걸릴 수 있습니다.
//   3) 전달된 인자의 개수만큼 코드가 생성되어야 하기 때문에,
//      코드 메모리 사용량이 증가할 수 있습니다.
//       - inline 최적화
//       - 명시적으로 타입을 지정할 수 있습니다.
template <typename TYPE>
TYPE square(TYPE x) { return x * x; }

int main()
{
    cout << square(10L) << endl;
    // TYPE -> long

    cout << square(3.14) << endl;
    // TYPE -> double

    cout << square<long>(42) << endl;
    // 명시적으로 템플릿의 타입을 지정할 수 있습니다.
}