// 12_레퍼런스3.cpp

#include <iostream>
using namespace std;

// 1. 레퍼런스 타입은 반드시 초기화가 필요합니다.
//  : NULL을 지정할 수 없습니다.
#if 0
int main()
{
    int* p = NULL; // 유효하지 않다.
    if (p) {
        *p = 42;
    }

    int n;
    // int& r;  - 에러!
    int& r = n;
}
#endif

struct User {
    char name[32];
    int age;

    char address[128];
};

// 문제점: 사용자 정의 타입인 구조체가 인자로 전달될 때,
//       복사가 수행됩니다.
//     > 구조체의 크기가 커질 수록, 복사의 비용은 커집니다.
// void PrintUser(User user)
// {
//     cout << user.name << ", " << user.age << endl;
// }

void PrintUser(const User* user)
{
    if (user) {
        cout << (*user).name << ", " << (*user).age << endl;
        cout << user->name << ", " << user->age << endl;
    }

    // user->age = 100; /* 컴파일 오류 */
}

void PrintUser(const User& user)
{
    // user.age = 100; /* 컴파일 오류 */
    cout << user.name << ", " << user.age << endl;
}

int main()
{
    cout << sizeof(User) << endl;
    User user = { "Tom", 42 };
    PrintUser(user);
    PrintUser(&user);
}
