// 16_stack7.cpp
#include <iostream>
using namespace std;

// 문제점
// - 객체가 자원을 할당하면, 반드시 해지도 해주어야 합니다.

// 해결방법
//  : 객체가 파괴되기 직전에 호출되는 약속된 함수가 있습니다.
//    소멸자(Destructor)
//    => ~클래스이름() {}
//      1) 소멸자의 이름은 ~클래스이름() 입니다.
//      2) 인자 없습니다.
//      3) 반환값, 반환타입 없습니다.
//      4) 오버로딩 불가능합니다.

class Stack {
private:
    int* buff;
    int top;

public:
    Stack(int sz = 10)
    {
        buff = new int[sz];
        top = 0;
    }

    // 소멸자
    ~Stack()
    {
        cout << "~Stack()" << endl;
        delete[] buff;
    }

    void push(int n)
    {
        buff[top++] = n;
    }

    int pop()
    {
        return buff[--top];
    }
};

int main()
{
    // Stack s2; // Stack() -> Stack(10)
    Stack s1(100); // Stack(int)

    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
}
