// 16_stack8.cpp
#include <iostream>
using namespace std;

class Stack {
private:
    // 멤버 데이터(상태)
    int buff[10];
    int top;

public:
    // 멤버 함수(행위) / 메소드
    void init() { top = 0; }
    void push(int n) { buff[top++] = n; }
    int pop() { return buff[--top]; }
};

int main()
{
    Stack s1;
    s1.init();

    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
}

#if 0
struct Stack {
    int buff[10];
    int top;
};

void init(Stack* s) { s->top = 0; }
void push(Stack* s, int n) { s->buff[(s->top)++] = n; }
int pop(Stack* s) { return s->buff[--(s->top)]; }

int main()
{
    Stack s1;
    init(&s1);

    push(&s1, 10);
    push(&s1, 20);
    push(&s1, 30);

    cout << pop(&s1) << endl;
    cout << pop(&s1) << endl;
    cout << pop(&s1) << endl;
}
#endif

#if 0
int buff[10];
int top = 0;

void push(int n) { buff[top++] = n; }
int pop() { return buff[--top]; }

int main()
{
    push(10);
    push(20);
    push(30);

    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;
}
#endif