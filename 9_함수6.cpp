// 9_함수6.cpp
#include <iostream>
using namespace std;

// STL(Standard Template Libarary)

// int square(int x) { return x * x; }
// double square(double x) { return x * x; }
// float square(float x) { return x * x; }
// long long square(long long x) { return x * x; }

// Template
template <typename TYPE>
TYPE square(TYPE x) { return x * x; }

int main()
{
    cout << square(10) << endl;
    cout << square(3.14) << endl;
}