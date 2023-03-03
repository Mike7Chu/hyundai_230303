// 4_변수.cpp
#include <iostream>
using namespace std;

// 사용자 정의 타입
// - struct, union, enum
#if 0
struct Point {
    int x;
    int y;
};

union Job {
    char school[32];
    char company[32];
};

enum TaskState {
    TASK_RUNNING = 0,
    TASK_STOPPED = 1
};

typedef struct Point POINT;
typedef union Job JOB;
typedef enum TaskState TASK_STATE;

int main()
{
    struct Point pt;
    union Job job;
    enum TaskState state = TASK_RUNNING;

    POINT pt2;
    JOB job2;
    TASK_STATE state2;
}
#endif

// C++에서 사용자 정의 타입 변수를 만들 때
// - struct, union, enum을 생략합니다.
struct Point {
    int x;
    int y;
};

union Job {
    char school[32];
    char company[32];
};

enum TaskState {
    TASK_RUNNING = 0,
    TASK_STOPPED = 1
};

int main()
{
    Point pt;
    Job job;
    TaskState state = TASK_RUNNING;
}