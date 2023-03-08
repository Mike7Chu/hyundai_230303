// 31_추상클래스.cpp
#include <iostream>
using namespace std;

// 순수 가상 함수를 1개 이상 가지고 있는 모든 클래스는
// "추상 클래스(abstract class)"가 됩니다.
//  => 인스턴스화가 불가능합니다.
class Shape {
public:
    virtual ~Shape() { }

    // 부모 입장에서 구현을 제공할 필요가 없고,
    // 자식 클래스가 반드시 Draw를 정의(오버라이딩)해야 할 때
    // : 순수 가상 함수(pure virtual function)
    virtual void Draw() const = 0;
};

// 부모가 요구하는 순수 가상함수를 오버라이딩 하지 않으면,
// 자식 클래스도 인스턴스화 할 수 없는 추상 클래스가 됩니다.
class Rect : public Shape {
public:
    void Draw() const override { cout << "Rect Draw" << endl; }
};

int main()
{
    Rect r;

    // Shape s;
    // Shape* s = new Shape;
}