// a.c

#if 0
#include <stdio.h>

void foo() { }
void goo(void) { }

int main(void)
{
    // goo(10); /* 컴파일 오류 */
    foo(10); /* 경고 */

    return 0;
}
#endif

#include <stdio.h>

#if 0
int main(void)
{
    // printf("Hello, C\n");
    FILE* fp = fopen("a.txt", "w");

    // fprintf(stdout, "Hello, C\n");
    fprintf(fp, "Hello, C\n");

    fclose(fp);

    return 0;
}
#endif

int main(void)
{
    // fprintf(stdout, "Hello, C");
    // fprintf(stdout, "\n");
    fprintf(stderr, "Hello C");

    while (1)
        ;
}