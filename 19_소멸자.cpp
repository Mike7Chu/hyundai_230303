// 19_소멸자.cpp
#include <iostream>
using namespace std;

// 1. 클래스 내부에서 자원(메모리 자원, 비메모리 자원)을 할당하고 있으면,
//    반드시 소멸자를 통해 자원을 해지해야 합니다.

// 2. 소멸자의 함수의 이름은 ~클래스이름() 입니다.
//    반환 타입 없고, 반환값 존재하지 않습니다.
//    오버로딩 허용하지 않습니다.

// 3. 사용자가 소멸자를 제공하지 않으면, 자동으로 아무일도 하지 않는
//    소멸자를 제공합니다.

class User {
    char* name;

public:
    ~User()
    {
        delete[] name;
    }

    User(const char* s)
    {
        name = new char[strlen(s) + 1];
        strcpy(name, s);
    }

    void Print() { cout << name << endl; }
};

int main()
{
    User user("Tom");
    user.Print();
}