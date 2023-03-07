// 22_복사생성자3.cpp
#include <iostream>
using namespace std;

class Sample {
public:
    Sample() { cout << "Sample()" << endl; }
    ~Sample() { cout << "~Sample()" << endl; }

    Sample(const Sample&) { cout << "Sample(const Sample&)" << endl; }
};

Sample foo()
{
    Sample s;
    return s;
}

int main()
{
    cout << "------" << endl;
    foo();
    cout << "------" << endl;
}