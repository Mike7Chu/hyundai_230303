#if 0
// func.cpp
void foo(void) { }
// 0000000000000000 T __Z3foov

void foo(int) { }
// 0000000000000000 T __Z3fooi

void foo(int a, double b, char c) { }
// 0000000000000000 T __Z3fooidc
#endif

// C++
#include <cstdio>
using namespace std;

extern "C" int add(int a, int b);
// extern "C"   --->  U _add
// extern "C" X --->  U __Z3addii

int main()
{
    int result = add(10, 20);
    printf("%d\n", result);
}