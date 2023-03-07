// 20_this2.cpp
#include <iostream>
using namespace std;

#if 0
// private 생성자
//  의도: 객체 생성의 정책을 제한하고 싶을 때
class Sample {
private:
    Sample() { cout << "Sample" << endl; }

public:
    ~Sample() { cout << "~Sample" << endl; }

    friend Sample& CreateSample();
};

Sample& CreateSample()
{
    static Sample s;
    return s;
}

int main()
{
    // Sample s;
    // Sample::Sample()
}
// Sample::~Sample()
#endif

// private 소멸자
// : 객체 생성을 new를 통해서만 허용하겠다.

class Sample {
private:
    ~Sample() { }

public:
    // void Destroy(Sample* this)
    void Destroy()
    {
        delete this;
    }
};
// Sample s; - 전역 객체 생성 불가

int main()
{
    Sample* p = new Sample; // new를 통한 객체 생성 허용
    // delete p;
    p->Destroy(); // Sample::Destory(p);

    // Sample s; - 지역 객체 생성 불가
}
