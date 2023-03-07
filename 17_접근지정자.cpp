// 17_접근지정자.cpp
#include <iostream>
#include <string>
using namespace std;

// 1. private 외부에서 접근이 불가능합니다.
// > 자신의 멤버 함수를 통해서만 접근이 가능합니다.

// 2. public은 외부에서 접근이 가능합니다.
// 3. friend로 선언된 함수와 클래스는 자신의 private 멤버에 접근할 수
//    있습니다.

// 4. friend는 캡슐화의 정책을 깨뜨리지 않고, 경계 확장할 수 있습니다.

class User {
    string name;
    int age;

public:
    User(string s, int n)
    {
        name = s;
        age = n;
    }

    // string GetName() { return name; }
    // int GetAge() { return age; }

    friend void PrintUser(User user);
    friend class UserPrinter;
};

class UserPrinter {
public:
    void PrintUser(User user)
    {
        cout << user.name << ", " << user.age << endl;
    }
};

void PrintUser(User user)
{
    cout << user.name << ", " << user.age << endl;
    // cout << user.GetName() << ", " << user.GetAge() << endl;
}

int main()
{
    User user("Tom", 42);
    PrintUser(user);

    UserPrinter printer;
    printer.PrintUser(user);
}