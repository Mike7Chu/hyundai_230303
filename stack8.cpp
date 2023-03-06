// 16_stack8.cpp
#include <iostream>
using namespace std;

// 클래스도 템플릿으로 만들 수 있습니다.
template <typename TYPE>
class Stack {
private:
    TYPE* buff;
    int top;

public:
    Stack(int sz = 10)
    {
        buff = new TYPE[sz];
        top = 0;
    }

    ~Stack()
    {
        cout << "~Stack()" << endl;
        delete[] buff;
    }

    void push(TYPE n)
    {
        buff[top++] = n;
    }

    TYPE pop()
    {
        return buff[--top];
    }
};

#include <string>

int main()
{
    // 클래스 템플릿은 타입을 추론하기 어렵습니다.
    // 타입을 명시적으로 지정하는 경우가 많습니다.
    Stack<string> s2;
    s2.push("hello");
    s2.push("world");

    cout << s2.pop() << endl;
    cout << s2.pop() << endl;

    Stack<int> s1(100);

    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
}
