// 31_추상클래스3.cpp
#include <iostream>
using namespace std;

// 1. 강한 결합
//    Car ------------> Camera
//    새로운 카메라가 나올 때마다, Car의 코드가 수정되어야 합니다.

// 2. 해결 방법
//    느슨한 결합 / 약한 결합

//                    <<interface>>
//   Car -------------> BlackBox
//                          |
//                      ---------------------
//                      |        |          |
//                  Camera     FHDCamera  UHDCamera

//  => 인터페이스 기반 설계
//     OCP를 만족합니다. 교체 가능한 유연한 설계입니다.
//      => "디자인 패턴(에릭감마 외 3명, Gang of Four, GoF)" 핵심
//         리팩토링(마틴 파울러)

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

// 3) 모든 카메라의 제작자는 BlackBox 인터페이스를 기반으로
//    카메라를 만들어야 합니다.

// Java
//   class Camera extends BlackBox {}   - 상속
//   class Camera implements BlackBox {} - 인터페이스 구현

//  - "Camera는 BlackBox를 상속합니다." 라고 하지 않고,
//    "Camera는 BlackBox의 인터페이스를 구현해야 합니다." 라고 합니다.
class Camera : public BlackBox {
public:
    void StartRecording() override
    {
        cout << "Start Recording" << endl;
    }

    void StopRecording() override
    {
        cout << "Stop Recording" << endl;
    }
};

class UHDCamera : public BlackBox {
public:
    void StartRecording() override
    {
        cout << "[UHD]Start Recording" << endl;
    }

    void StopRecording() override
    {
        cout << "[UHD]Stop Recording" << endl;
    }
};

int main()
{
    UHDCamera cam;
    Car car(&cam);

    car.Go();
}