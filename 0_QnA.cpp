/*
public class Sample {
  public static void main(String[] args) {
    System.out.println("Hello, Java");
  }
}

// Kotlin
fun main(): Int {
  println("Hello, Kotlin")
}
*/
#include <iostream>
using namespace std;

// char: 문자 타입
// > 표준에서 char에 대한 signed / unsigned 여부는 미지정 사항입니다.
// signed char / unsigned char
// > 1바이트 정수 타입

// > C/C++ 표준에서 타입의 크기는 표준에서 정의하고 있지 않습니다.
// signed char: 1바이트(-128 - 127)
//       short: 2바이트(-32768 - 32767)
//         int: 4바이트(-21억 - 21억)
//        long: 4바이트 / 8바이트
//   long long: 8바이트

// > 표현 범위에 따른 정수 타입을 사용할 때, 아래의 헤더를 통해
//   사용하는 것이 안전합니다.
// #include <stdint.h>
#if 0
#include <cstdint>

int main()
{
    int8_t a;
    uint32_t b;

    printf("%zu\n", sizeof(long)); // ???
}
#endif

// 함수 포인터
// > 함수를 가르키는 포인터입니다.

int add(int a, int b) { return a + b; }
// int(int, int)
// int(*)(int, int)

int sub(int a, int b) { return a - b; }
// int(int, int)
// int(*)(int, int)

// - 함수의 타입은 함수의 인자 정보와 반환 타입에 의해서 결정됩니다.
//   => 함수의 타입은 함수의 시그니처에 의해서 결정됩니다.
// - 함수의 시그니처가 동일하면, 같은 함수입니다.
//   함수의 시그니처가 동일하면, 같은 함수 포인터를 통해 참조할 수 있습니다.

int main()
{
    int n; // int
    int* p = &n;
    *p = 10;
    cout << *p << endl;

    int (*p2)(int, int); // 함수 포인터 타입 변수
    printf("%p\n", &add);

    p2 = &add;
    printf("%p\n", p2);

    p2 = &sub;

    int result = (*p2)(10, 20);
    cout << result << endl;
}