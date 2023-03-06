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

    void push(int n);
    int pop();
};

#endif