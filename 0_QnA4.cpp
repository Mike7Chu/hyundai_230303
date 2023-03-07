// 0_QnA.cpp
#include <iostream>
using namespace std;

// this
// : 멤버 함수를 통해 암묵적으로 전달되는 객체의 주소값

class Sample {
    int data;

public:
    // void f3(Sample* this)
    int f3()
    {
        cout << "f3" << endl;
        return data;
        // return this->data;
    }

    // void f1(Sample* this)
    void f1()
    {
        cout << this << endl;
        cout << "f1" << endl;
    }

    int f2()
    {
        cout << "f2" << endl;
        return 0;
    }
};

int main()
{
    // Sample* p = new Sample;
    Sample* p = nullptr;
    p->f1(); // Sample::f1(p); Sample::f1(nullptr);
    p->f2(); // Sample::f2(p);
    p->f3(); // Sample::f3(p);
}