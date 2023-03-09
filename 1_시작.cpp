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

#if 0
int main()
{
    printf("Hello, C++\n");
    // C++은 컴파일러가 return 0을 생략하면, 자동으로 추가해줍니다.
}
#endif

// UNIX
//  : 모든 것은 파일입니다.
//   write("hello") ----> 화면 -> 화면 출력
//                       비디오 -> 비디오 드라이버 출력
//                        소켓 -> 네트워크

// 프로세스
// - 키보드(표준 입력 장치) => stdin   - 라인 버퍼링
// - 모니터(표준 출력 장치) => stdout  - 라인 버퍼링
// - 모니터(표준 에러 장치) => stderr  - 버퍼링 X

// C++ 표준 입출력 라이브러리가 있습니다.
#include <iostream>
// Input Output Stream
//  표준 입력 객체: std::cin
//  표준 출력 객체: std::cout
//  표준 에러 객체: std::cerr

#if 0
int main()
{
    std::cout << "Hello, C++"
              << std::endl;
}
#endif

// 1) std::cout, std::cin, std::endl 정체는 무엇인가?
//  std::cout -> std::ostream의 전역 객체
//  std::cin  -> std::istream의 전역 객체
//  => 연산자 오버로딩을 통해 입출력을 처리할 수 있습니다.

// 2) 서식을 지정하지 않아도, 타입에 따라 원하는 형태로 입출력 됩니다.
//    원리는 무엇인가?
//  => 함수 오버로딩

// 3) 주소를 보내지 않아도, 변수의 값이 변경됩니다.
//    원리는 무엇인가?
// => 레퍼런스

int main()
{
    int n;
    // scanf("%lf", &n);
    // printf("n: %lf\n", n);

    std::cin >> n;
    std::cout << "n: " << n << std::endl;
}