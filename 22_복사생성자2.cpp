// 22_복사생성자2.cpp
#include <iostream>
using namespace std;

class Sample {
public:
    Sample() { cout << "Sample()" << endl; }
    ~Sample() { cout << "~Sample()" << endl; }

    Sample(const Sample&) { cout << "Sample(const Sample&)" << endl; }
};

// 1. 함수의 인자로 객체가 전달될 때(call by value)
//   해결 방법: const&로 전달해야 합니다.

// void foo(Sample s) { }
void foo(const Sample& s) { }

int main()
{
    Sample s;
    cout << "------" << endl;
    foo(s);
    cout << "------" << endl;
}