// b.c
#include <stdio.h>

// int add(int a, int b); // 선언
extern int a; // 선언
static int add(int a, int b)
{
    printf("my add\n");
    return a + b;
}

int main(void)
{
    int result = add(10, 20);
    printf("result: %d\n", result);

    printf("a: %d\n", a);

    return 0;
}
/*
                 U _a
                 U _add
0000000000000000 T _main
                 U _printf

*/