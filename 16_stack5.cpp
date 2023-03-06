// 16_stack4.cpp
#include <iostream>
using namespace std;

// 문제점
// - 객체를 생성하였을 때, 바로 사용할 수 없습니다.

// 해결 방법
// - 객체가 생성되었을 때, 호출되는 약속된 멤버 함수가 있습니다.
//   "생성자(Constructor)" => 초기화 역활
//     클래스이름() {}
//     - 이름은 클래스 이름과 동일합니다.
//     - 반환타입도 명시하지 않고, 반환값도 없습니다.

class Stack {
private:
    // 멤버 데이터 변수
    int buff[10];
    int top;

public:
    Stack()
    {
        cout << "Stack()" << endl;
        top = 0;
    }

    // 멤버 함수 - 멤버 데이터를 읽거나 변경하는 역활
    // void init()
    // {
    //     top = 0;
    // }

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
    // s2.init();
    s2.push(10);
    cout << s2.pop() << endl;

    Stack s1;
    // s1.init();

    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
}
