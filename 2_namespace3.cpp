// 2_namespace3.cpp
#include <iostream>
// 1. C++ 표준 헤더파일은 확장자를 사용하지 않습니다.
// 2. 표준 라이브러리는 std의 이름 공간안에 존재합니다.
using namespace std;

// #include <stdio.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>

int main()
{
    std::printf("Hello, C\n");
}