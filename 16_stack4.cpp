// 16_stack4.cpp
#include <iostream>
using namespace std;

// 멤버 데이터(객체의 상태)는 멤버 함수를 통해서 조작되어야 합니다.
// 외부에서 함부로 변경되면 안됩니다.
//  => 정보 은닉(Information Hiding)
//   : 접근 지정자
//    1) private: 외부에서 접근이 불가능합니다.
//    2) public: 외부에서 접근이 가능합니다.

// "class" 키워드는 "struct"와 동일하지만, 기본 접근지정자가 private 입니다.
// - class는 객체를 위한 타입입니다.

class Stack {
private:
    // 멤버 데이터 변수
    int buff[10];
    int top;

public:
    // 멤버 함수 - 멤버 데이터를 읽거나 변경하는 역활
    void init()
    {
        top = 0;
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

Stack s2;
int main()
{
    s2.init();
    s2.push(10);
    cout << s2.pop() << endl;

    Stack s1;
    // s1.top = 100;

    s1.init();

    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
}
