// 24_객체복사.cpp
#include <iostream>
using namespace std;

// 해결 방법
// 1) 깊은 복사
// 2) 참조 계수
// 3) 복사 금지

class User {
    char* name;
    int age;

    // C++98, private 영역에 선언만 한다. 링크 오류!
    // User(const User& rhs);

public:
    User(const User& rhs) = delete; // 복사 금지, C++11

    User(const char* s, int n)
        : age(n)
    {
        name = new char[strlen(s) + 1];
        strcpy(name, s);
    }

    ~User()
    {
        delete[] name;
    }

    void Print()
    {
        cout << name << ", " << age << endl;
    }
};

int main()
{
    User user1("Tom", 42);
    user1.Print();

    // User user2 = user1;
    // user2.Print();
}
