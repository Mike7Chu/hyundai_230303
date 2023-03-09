// 24_객체복사3.cpp
#include <iostream>
using namespace std;

// 해결 방법
// 1) 깊은 복사
// 2) 참조 계수(Reference Counting)

class User {
    char* name;
    int age;

    int* ref;

    void Release()
    {
        if (--(*ref) == 0) {
            delete[] name;
            delete ref;
        }
    }

public:
    User(const char* s, int n)
        : age(n)
    {
        name = new char[strlen(s) + 1];
        strcpy(name, s);

        ref = new int(1);
    }

    User& operator=(const User& rhs)
    {
        // 1. 자신과 동일한 타입인지 체크합니다.
        if (this == &rhs)
            return *this;

        // 2. 참조 계수를 감소하고, 0인 경우 자원을 해지합니다.
        Release();

        // 3. 복사, 참조 계수 증가!
        name = rhs.name;
        age = rhs.age;
        ref = rhs.ref;

        ++(*ref); // !!!!!!!

        return *this;
    }

    User(const User& rhs)
        : name(rhs.name)
        , age(rhs.age)
        , ref(rhs.ref)
    {
        // 참조 계수 증가
        ++(*ref);
    }

    ~User()
    {
        Release();
        // if (--(*ref) == 0) {
        //     delete[] name;
        //     delete ref;
        // }
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
