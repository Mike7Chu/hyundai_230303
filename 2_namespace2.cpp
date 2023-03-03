// 2_namespace2.cpp
#include <iostream>

// namespace 사용하는 방법 3가지
// 1) 전체 이름을 사용하는 방법
//    namespace::심볼 이름을 명시합니다.
//    - ::(범위 연산자)
#if 0
void foo() { std::cout << "foo" << std::endl; }

namespace sample {
void foo()
{
    std::cout << "sample::foo" << std::endl;
    // foo(); // 같은 이름 공간의 함수를 암묵적으로 접근할 수 있습니다.
    ::foo(); // 명시적으로 전역 이름 공간을 표현하는 방법입니다.
}
}

int main()
{
    sample::foo();
    std::cout << "Hello, C++" << std::endl;
}
#endif

// 2. using 선언(Declaration)
using std::cout;
using std::endl;

int main()
{
    cout << "Hello, C++" << endl;
}