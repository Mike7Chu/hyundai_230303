// 31_추상클래스4.cpp
#include <iostream>
using namespace std;

// 1. C++은 인터페이스를 만들기 위한 키워드가 제공되지 않습니다.
// 2. 인터페이스에 새로운 기능의 추가 및 변경이 어렵습니다.
//    => 범용 인터페이스로 하지 말고, 역활에 따라 분리해서 사용하는 것이
//       좋습니다.

struct MP3 {
    virtual ~MP3() { }

    virtual void Play() = 0;
    virtual void Stop() = 0;

    // virtual void PlayOneMinute() = 0;
    // default method / defender method
    virtual void PlayOneMinute()
    {
        // 기본 구현을 제공합니다.
    }
};

class SmartPhone : public MP3 {
public:
    void Play() override { }
    void Stop() override { }
};

class Computer : public MP3 {
public:
    void Play() override { }
    void Stop() override { }
};

int main()
{
    Computer c;
    SmartPhone s;
}

#if 0
class MP3 {
public:
    virtual ~MP3() { }

    virtual void Play() = 0;
    virtual void Stop() = 0;
};
#endif