// 3_iostream.cpp
#include <iostream>
#include <iomanip> // setw, setfill
using namespace std;

// C: 표준 출력 - printf
//    표준 입력 - scanf

// C++: 표준 출력 객체 - cout
//      표준 입력 객체 - cin
#if 0
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", n);

    cin >> n;
    cout << n << endl;

    char str[32];
    scanf("%s", str);
    printf("%s\n", str);

    cin >> str;
    cout << str << endl;
}
#endif

int main()
{
    // int n = 0xFAFA;
    // 1111 1010 1111 1010

    // C++11은 2진수 상수를 표현할수 있습니다.
    // => 단일 따옴표를 통해 가독성을 높일 수 있습니다.
    int n = 0b1111'1010'111'110'10;
    printf("%x\n", n);
    printf("%d\n", n);
    printf("%X\n", n);
    cout << hex << n << endl;
    cout << dec << n << endl;

    cout << hex << uppercase << n << endl;

    // hex, uppercase, dec
    // setw => iomanip 헤더 안에 있습니다.
    // => IO 조정자(조작자, Manipulator)

    printf("%010d\n", n);
    cout << setw(10) << setfill('0') << dec << n << endl;
}