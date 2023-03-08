// 29_다형성8.cpp
#include <iostream>
#include <vector>
using namespace std;

// 1. 각 도형의 클래스를 설계합니다.
// 2. 부모 클래스를 도입합니다.
//  => 하나의 컨테이너에 모든 도형을 보관할 수 있습니다.
//  => 연관된 클래스를 묶어서 관리할 수 있습니다.
//     "동종을 보관하는 컨테이너"

// 3. 자식 클래스의 공통의 기능을 부모 클래스의 포인터(참조) 타입을 통해서
//    이용하기 위해서는 해당 기능이 반드시 부모를 통해서 제공되어야 합니다.

// 4. 자식이 재정의하는 모든 함수는 반드시 "가상 함수"이어야 한다.
// 5. 부모 클래스는 반드시 가상 소멸자를 제공해야 합니다.

// 6. OCP(Open Close Principle, 개방 폐쇄 원칙)
//  => 확장에는 열려 있어야 하고,(새로운 기능이 추가되어도)
//     수정에는 닫혀 있어야 한다.(기존 코드는 수정되면 안된다.)
//   "다형성"은 OCP를 만족합니다!.

class Shape {
public:
    virtual ~Shape() { }
    virtual void Draw() const { cout << "Shape Draw" << endl; }
};

class Rect : public Shape {
public:
    void Draw() const override { cout << "Rect Draw" << endl; }
};

class Circle : public Shape {
public:
    void Draw() const override { cout << "Circle Draw" << endl; }
};

class Triangle : public Shape {
public:
    void Draw() const override { cout << "Triangle Draw" << endl; }
};

int main()
{
    // vector<Rect*> rects;
    // vector<Circle*> circles;

    vector<Shape*> shapes;

    while (1) {
        int cmd;
        cin >> cmd;

        if (cmd == 1) {
            shapes.push_back(new Rect);
        } else if (cmd == 2) {
            shapes.push_back(new Circle);
        } else if (cmd == 3) {
            shapes.push_back(new Triangle);
        }

        else if (cmd == 9) {
            for (auto e : shapes) {
                e->Draw();
                // Draw() ---> Rect::Draw
                //             Circle::Draw
                //             Triangle::Draw
            }
        }
    }
}