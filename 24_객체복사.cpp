// 24_객체복사.cpp
#include <iostream>
using namespace std;

// 객체가 포인터 멤버 데이터를 가지는 경우,
// 컴파일러가 자동으로 제공하는 복사 생성자를 사용할 경우
// "얕은 복사(shallow copy)"의 문제가 발생합니다.
// > 객체가 포인터 멤버를 가지는 경우, 반드시 복사 생성자를
//   직접 정의해서 문제를 해결해야 합니다.

class User {
    char* name;
    int age;

public:
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
