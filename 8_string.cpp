// 8_string.cpp
#include <iostream>
using namespace std;

#include <cstring>

// 1. C 문자열
//  : '\0' 으로 끝나는 char 배열
//  strcmp, strcpy, strcat
//  => 문자열의 연산을 함수를 통해서 수행해야 합니다.
//     문자열을 위한 메모리 관리를 직접 해야 합니다.
#if 0
int main()
{
    char str1[32] = "hello";
    const char* str2 = "hello";
    // str2[0] = 'x';

    if (strcmp(str1, str2) == 0) {
        cout << "같은 문자열" << endl;
    }

    char str3[32];
    // str3 = str1;
    strcpy(str3, str1);

    strcat(str3, " world");
    cout << str3 << endl;
}
#endif

// 2. C++ 문자열 - std::string
#include <string>

// 1) 직관적이다.
//    연산자를 통해 문자열의 연산을 수행할 수 있습니다.
// 2) 메모리 관리도 자동으로 수행됩니다.
//    - 안전하게 사용할 수 있습니다.

int main()
{
    std::string s1 = "hello";
    std::string s2("hello");

    if (s1 == s2) {
        cout << "같은 문자열" << endl;
    }

    std::string s3 = s1; // 복사

    // s3 = s3 + " world";
    s3 += " world";

    cout << s3 << endl;
}