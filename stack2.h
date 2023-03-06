// stack2.h
#ifndef STACK2_H
#define STACK2_H

class Stack {
private:
    int* buff;
    int top;

public:
    Stack(int sz = 10);
    ~Stack();

    inline void push(int n);
    inline int pop();
};

// inline 함수는 구현이 헤더를 통해
// 제공되어야 합니다.
void Stack::push(int n)
{
    buff[top++] = n;
}

int Stack::pop()
{
    return buff[--top];
}
#endif