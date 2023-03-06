#include "stack2.h"

Stack::Stack(int sz)
{
    buff = new int[sz];
    top = 0;
}

Stack::~Stack()
{
    delete[] buff;
}

/*
void Stack::push(int n)
{
    buff[top++] = n;
}

int Stack::pop()
{
    return buff[--top];
}
*/