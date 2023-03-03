
// func.cpp
void foo(void) { }
// 0000000000000000 T __Z3foov

void foo(int) { }
// 0000000000000000 T __Z3fooi

void foo(int a, double b, char c) { }
// 0000000000000000 T __Z3fooidc