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
#if 0
class Ptr {
    Image* obj;

public:
    inline Ptr(Image* p = nullptr)
        : obj(p)
    {
    }

    // nullptr은 delete로 전달되면 아무일도 일어나지 않습니다.
    inline ~Ptr()
    {
        delete obj;
    }

    // 멤버 함수를 통해서만 제공되어야 하는 연산자 오버로딩입니다.
    inline Image& operator*() { return *obj; }
    Image* operator->() { return obj; }
};
#endif

template <typename TYPE>
class Ptr {
    TYPE* obj;

public:
    inline Ptr(TYPE* p = nullptr)
        : obj(p)
    {
    }

    // nullptr은 delete로 전달되면 아무일도 일어나지 않습니다.
    inline ~Ptr()
    {
        delete obj;
    }

    // 멤버 함수를 통해서만 제공되어야 하는 연산자 오버로딩입니다.
    inline TYPE& operator*() { return *obj; }
    TYPE* operator->() { return obj; }
};

// C++ 표준 라이브러리에 스마트 포인터가 도입되었습니다.
// 1. unique_ptr
//   : 복사 금지

// 2. shared_ptr
//   : 참조 계수 기반

int main()
{
    shared_ptr<Image> p1(new Image);
    shared_ptr<Image> p2 = p1; /* 허용, 참조 계수 증가 */

    unique_ptr<Image> x1(new Image);
    // unique_ptr<Image> x2 = x1; /* 허용 X */

    // shared_ptr<Image> p(new Image);
    unique_ptr<Image> p(new Image);

    // Ptr<Image> p = new Image;
    // Ptr<Image> p(new Image);

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