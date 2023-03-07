// 27_참조반환.cpp
#include <iostream>
#include <string>
using namespace std;

#if 0
class User {
    string name;
    int age;
    string address;
    string school;

public:
    // Setter
    void SetName(const string& s) { name = s; }
    void SetAge(int n) { age = n; }
    void SetAddress(const string& s) { address = s; }
    void SetSchool(const string& s) { school = s; }
};

int main()
{
    User user;
    user.SetName("Bob");
    user.SetAge(42);
    user.SetAddress("Seoul");
    user.SetSchool("Seoul Uni");
}
#endif

#if 0
class User {
    string name;
    int age;
    string address;
    string school;

public:
    // Setter
    User* SetName(const string& s)
    {
        name = s;
        return this;
    }
    User* SetAge(int n)
    {
        age = n;
        return this;
    }
    User* SetAddress(const string& s)
    {
        address = s;
        return this;
    }
    User* SetSchool(const string& s)
    {
        school = s;
        return this;
    }
};

int main()
{
    User user;
    user.SetName("Bob");
    user.SetAge(42);
    user.SetAddress("Seoul");
    user.SetSchool("Seoul Uni");

    user.SetName("Bob")
        ->SetAge(42)
        ->SetAddress("Seoul")
        ->SetSchool("Seoul Uni");
}
#endif

class User {
    string name;
    int age;
    string address;
    string school;

public:
    // Setter
    User& SetName(const string& s)
    {
        name = s;
        return *this;
    }

    User& SetAge(int n)
    {
        age = n;
        return *this;
    }

    User& SetAddress(const string& s)
    {
        address = s;
        return *this;
    }

    User& SetSchool(const string& s)
    {
        school = s;
        return *this;
    }
};

int main()
{
    User user;
    user.SetName("Bob");
    user.SetAge(42);
    user.SetAddress("Seoul");
    user.SetSchool("Seoul Uni");

    user.SetName("Bob")
        .SetAge(42)
        .SetAddress("Seoul")
        .SetSchool("Seoul Uni");
}