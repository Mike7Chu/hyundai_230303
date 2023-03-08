#include <iostream>
#include <string>
using namespace std;

class User {
public:
    string name;
    int age;

public:
    User(string s, int n)
    {
        name = s;
        age = n;
    }

    string GetName() const { return name; }
    int GetAge() const { return age; }
};

int main()
{
    User user("Tom", 42);
    cout << user.name << endl;

    cout << user.GetName() << endl;
}