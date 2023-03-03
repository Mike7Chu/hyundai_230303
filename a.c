// a.c

#include <stdio.h>

void foo() { }
void goo(void) { }

int main(void)
{
    // goo(10); /* 컴파일 오류 */
    foo(10); /* 경고 */

    return 0;
}