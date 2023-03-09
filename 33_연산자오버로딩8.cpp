// 33_연산자오버로딩8.cpp
#include <iostream>
using namespace std;

class Image {
public:
    Image() { cout << "Image()" << endl; }
    ~Image() { cout << "~Image()" << endl; }

    void Draw() const { cout << "Image draw" << endl; }
};

// 포인터 역활을 수행하는 클래스
//  => 스마트 포인터(Smart Pointer)
//   핵심: 포인터 객체가 사라질 때, 가지고 자원을
//        소멸자를 통해 delete 합니다.
class Ptr {
    Image* obj;

public:
    Ptr(Image* p = nullptr)
        : obj(p)
    {
    }

    // nullptr은 delete로 전달되면 아무일도 일어나지 않습니다.
    ~Ptr()
    {
        delete obj;
    }

    // 멤버 함수를 통해서만 제공되어야 하는 연산자 오버로딩입니다.
    Image& operator*() { return *obj; }
    Image* operator->() { return obj; }
};
int main()
{
    Ptr p = new Image;
    p->Draw();
    // (p.operator->())Draw()
    // => (p.operator->())->Draw()

    (*p).Draw();
    // (p.operator*()).Draw()
    // (Image&).Draw()
}

#if 0
int main()
{
    Image* p = new Image;
    p->Draw();

    delete p;
}
#endif