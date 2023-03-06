// stack.h
// #pragma once => 표준이 아닙니다.

// include guard
// > 중복 포함을 방지합니다.
#ifndef STACK_H
#define STACK_H

struct Stack {
    int buff[10];
    int top;
};

typedef struct Stack Stack;

void init(Stack* s);
void push(Stack* s, int n);
int pop(Stack* s);

#endif
