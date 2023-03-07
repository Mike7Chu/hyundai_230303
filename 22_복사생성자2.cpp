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
#if 0
// void foo(Sample s) { }
void foo(const Sample& s) { }

int main()
{
    Sample s;
    cout << "------" << endl;
    foo(s);
    cout << "------" << endl;
}
#endif

// 2. 함수가 객체를 값으로 반환할 때
//  > 유효한 메모리에 대해서 참조를 반환하면 됩니다.

Sample s;
// Sample foo()
Sample& foo()
{
    return s;
    // 객체를 값으로 반환하면, 반환용 임시 객체가 생성됩니다.
}

//   복사
// s ---> 임시 객체

int main()
{
    cout << "------" << endl;
    foo();
    cout << "------" << endl;
}