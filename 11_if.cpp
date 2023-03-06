// 11_if.cpp
#include <iostream>
using namespace std;

// 실패할 경우, -1을 반환합니다.
int foo() { return -1; }
// 실패할 경우, NULL을 반환합니다.
int* goo() { return NULL; }

// 함수가 실패할 가능성이 있는 경우, 반드시 오류값을 체크해야 합니다.
#if 0
int main()
{
    for (int i = 0; i < 10; i++) {
        // ...
    }

    int ret = foo();
    if (ret == -1) {
        // 오류 처리
    }

    int* ret2 = goo();
    if (ret2 == NULL) {
        // 오류 처리
    }
}
#endif

enum {
    TASK_RUNNING = 0,
    TASK_STOPPED = 1,
    TASK_WAIT = 2
};

int GetTaskState() { return TASK_WAIT; }

int main()
{
    switch (int state = GetTaskState(); state) {
    case TASK_RUNNING:
        printf("state: %d\n", state);
        break;
    case TASK_STOPPED:
        break;
    case TASK_WAIT:
        break;
    }

    // C++17: if-statement with initializer
    //  정의: 조건문과 switch 에서만 유용한 변수를 정의할 수 있습니다.
    if (int ret = foo(); ret == -1) {
        // 오류 처리
    }

    if (int* ret = goo(); ret == NULL) {
        // 오류 처리
    }
}