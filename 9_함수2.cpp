// 9_함수2.cpp
#include <iostream>
using namespace std;

// C 언어는 동일한 이름의 함수를 여러개 제공할 수 없습니다.
// C++은 동일한 이름의 함수라도, 인자 정보(인자 타입, 개수)가 다를 경우
// 여러 개 제공할 수 있습니다.
//  => 함수 오버로딩(overloading, 중복 적재)

// 원리
// => C++ 컴파일러는 함수의 이름을 결정할 때,
//    인자 정보를 사용합니다.
//   "Name Mangling(짓이기다)"

// C: foo(int a)    => _foo
//    foo(double d) => _foo

// C++: foo(int a)    => __Z3fooi
//      foo(double d) => __Z3food

int square(int x) { return x * x; }
double square(double x) { return x * x; }

int main()
{
    cout << square(10) << endl; // square(int)
    cout << square(3.14) << endl; // square(double)
}

#if 0
// C 언어는 함수의 이름을 분리해서 만듭니다.
int squarei(int x) { return x * x; }
double squared(double x) { return x * x; }

int main()
{
    cout << squarei(10) << endl;
    cout << squared(3.14) << endl;
}
#endif