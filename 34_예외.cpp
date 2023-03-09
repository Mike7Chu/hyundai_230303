// 34_예외.cpp
#include <iostream>
using namespace std;

// - 실패 가능한 함수를 사용하면, 반드시 반환값을 통해 오류를 체크해야 합니다.

// 성공: 유효한 포인터
// 실패: nullptr
int* foo()
{
    return nullptr;
}

// C의 오류 처리
// => 함수의 반환값
//  성공: 0
//  실패: 0이 아닌 값
int OpenFile(const char* filename)
{
    if (filename == nullptr) {
        return -1;
    }
    // ....

    return 0;
}

#include <cstdlib>

// 반환값을 통한 오류 처리의 문제점
// 1) 오류 처리를 강제할 수 없습니다.
// 2) 반환값이 결과값인지 오류값인지를 구분할 수 없는 경우도 있습니다.
//    atoi

int main()
{
    int result = atoi("10");
    cout << result << endl;

    int ret = OpenFile(nullptr);
    if (ret != 0) {
        // .. 오류 처리
    }
}