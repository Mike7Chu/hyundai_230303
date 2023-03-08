// 28_상속.cpp
#include <iostream>
#include <string>
using namespace std;

#if 0
class Student {
    string name;
    string address;
    int age;

    int id;

public:
    string GetName() const { return name; }
    string GetAddress() const { return "주소: " + address; }
    int GetAge() const { return age; }

    int GetId() const { return id; }
};

class Teacher {
    string name;
    string address;
    int age;
    string major;

public:
    string GetName() const { return name; }
    string GetAddress() const
    {
        return "주소: " + address;
    }

    int GetAge() const { return age; }

    string GetMajor() const { return major; }
};

int main()
{
    Student s;
    Teacher t;

    cout << s.GetAddress() << endl;
    cout << s.GetId() << endl;

    cout << t.GetAddress() << endl;
    cout << t.GetMajor() << endl;
}
#endif

// 변하는 것과 변하지 않는 것을 분리해야 한다.
//  "공통성과 가변성의 분리"

class User {
    string name;
    string address;
    int age;

public:
    string GetName() const { return name; }
    string GetAddress() const { return address; }
    int GetAge() const { return age; }
};

class Student : public User {
    int id;

public:
    int GetId() const { return id; }
};

class Teacher : public User {
    string major;

public:
    string GetMajor() const { return major; }
};

int main()
{
    Student s;
    Teacher t;

    cout << s.GetAddress() << endl;
    cout << s.GetId() << endl;

    cout << t.GetAddress() << endl;
    cout << t.GetMajor() << endl;
}