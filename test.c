#include <stdio.h>

int main(void)
{
    int i = 0;

    int a, b, c;
    a = b = c = 10;
    // a = b = (c = 10)
    // a = (b = 10)
    // a = 10

    // (a = 10) = 20;

    // ++ ++i;

    return 0;
}