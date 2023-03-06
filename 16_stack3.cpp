// 16_stack3.cpp
#include <iostream>
using namespace std;

// 3. 멤버 함수(상태를 조작하는 함수)와 멤버 데이터(상태)를 하나의
//   타입으로 묶을 수 있습니다.
//    - 캡슐화(상태 + 행위)

// => 상태와 행위를 가지고 있는 변수: 객체(object)

struct Stack {
    // 멤버 데이터 변수
    int buff[10];
    int top;

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
    // s1.top = 100; // !!!
    s1.init();

    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
}
