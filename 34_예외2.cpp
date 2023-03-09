// 34_예외2.cpp
#include <iostream>
using namespace std;

// 반환값을 통한 오류 처리의 문제점
// 1) 오류 처리를 강제할 수 없습니다.
//  => throw한 오류를 처리하지 않으면,
//     프로그램은 비정상 종료합니다.
//  => try-catch 구문을 통해 오류를 처리할 수 있습니다.

// 2) 반환값이 결과값인지 오류값인지를 구분할 수 없는 경우도 있습니다.
// => 오류는 throw 하고, 결과는 return 합니다.

int OpenFile(const char* filename)
{
    if (filename == nullptr) {
        throw -1;
    }
    // ....

    return 0;
}

int main()
{
    try {
        int result = OpenFile(nullptr);
    } catch (int& error) {
        cout << error << endl;
    }
}