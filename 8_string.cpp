// 8_string.cpp
#include <iostream>
using namespace std;

#include <cstring>

// 1. C 문자열
//  : '\0' 으로 끝나는 char 배열
//  strcmp, strcpy, strcat
//  => 문자열의 연산을 함수를 통해서 수행해야 합니다.
//     문자열을 위한 메모리 관리를 직접 해야 합니다.
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