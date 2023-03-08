// 31_추상클래스3.cpp
#include <iostream>
using namespace std;

// 1. 강한 결합
//    Car ------------> Camera
//    새로운 카메라가 나올 때마다, Car의 코드가 수정되어야 합니다.

// 2. 해결 방법
//    느슨한 결합 / 약한 결합

//---------------------------
// 1) 카메라의 제작자와 자동차의 제작자가 카메라의 인터페이스를 약속합니다.
//  "인터페이스" / "프로토콜"
class BlackBox {
public:
    virtual ~BlackBox() { }

    virtual void StartRecording() = 0;
    virtual void StopRecording() = 0;
};

// 2) 자동차의 제작자는 BlackBox의 인터페이스를 이용하는 코드를
//    작성합니다.
class Car {
    BlackBox* camera;

public:
    Car(BlackBox* p)
        : camera(p)
    {
    }

    void Go()
    {
        camera->StartRecording();
        cout << "Car Go" << endl;
        camera->StopRecording();
    }
};