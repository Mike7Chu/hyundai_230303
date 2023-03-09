// 24_객체복사2.cpp
#include <iostream>
using namespace std;

// 해결 방법
// 1) 깊은 복사

class User {
    char* name;
    int age;

public:
    // 깊은 복사
    User(const User& rhs)
        : age(rhs.age)
    {
        name = new char[strlen(rhs.name) + 1];
        strcpy(name, rhs.name);
    }

    // a = a;
    User& operator=(const User& rhs)
    {
        // 1. 자신과 동일한 객체인지 체크해야 합니다.
        if (this == &rhs)
            return *this;

        // 2. 자원을 가지고 있다면, 해지해주어야 합니다.
        if (name) {
            delete[] name;
        }

        // 3. 깊은 복사 수행
        name = new char[strlen(rhs.name) + 1];
        strcpy(name, rhs.name);

        age = rhs.age;

        return *this;
    }

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

    User user2 = user1;
    user2.Print();
}
