// 1_시작.cpp
// https://github.com/yoondev-classroom/hyundai_230303
#include <stdio.h>

// 1. C++ 확장자
//  .cpp, .cc, .cxx, ...

// 2. C++ 컴파일러
//  - Microsoft Visual C/C++ Compiler => MSVC, cl
//  - GNU C/C++ Compiler => GCC
//  - LLVM Compiler => clang

// 3. C++ 표준
//   C++98/03 => 1.0
//   C++11/14 => 2.0, Modern C++
//   C++17/20 => 3.0

// 4. C++은 C를 지원합니다.
//  핵심: C의 표준과 C++ 안에서의 C의 표준은 다릅니다.

#include <stdlib.h>

#if 0
void foo() { }

int main(void)
{
    // foo(10);

    printf("Hello, C\n");
    return 0;
    // return EXIT_SUCCESS;
}
#endif

int main()
{
    printf("Hello, C++\n");
    // C++은 컴파일러가 return 0을 생략하면, 자동으로 추가해줍니다.
}