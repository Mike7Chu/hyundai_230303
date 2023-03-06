// 16_stack.cpp
#include <iostream>
using namespace std;

// LIFO(Last In First Out)의 특성을 가지는
// 자료구조 입니다.
// > 스택을 만들어봅시다.

// 1. 전역 변수
// > 스택을 여러개 만들기 어렵습니다.

int buff[10];
int top = 0;

void push(int n)
{
    buff[top++] = n;
}

int pop()
{
    return buff[--top];
}

int main()
{
    push(10);
    push(20);
    push(30);

    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;
}