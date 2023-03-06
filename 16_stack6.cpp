// 16_stack6.cpp
#include <iostream>
using namespace std;

// 문제점
// - 사용자가 원하는 크기로 데이터 크기를 결정하고 싶습니다.
// - 생성자는 오버로딩이 가능합니다.

class Stack {
private:
    int* buff;
    int top;

public:
    // 기본 파라미터는 불필요한 오버로딩을 제거할 수 있습니다.
    Stack(int sz = 10)
    {
        buff = new int[sz];
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

int main()
{
    Stack s2; // Stack()
    Stack s1(100); // Stack(int)

    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
}
