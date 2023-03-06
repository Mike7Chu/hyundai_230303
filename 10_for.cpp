// 10_for.cpp
#include <iostream>
using namespace std;

int main()
{
    int x[5] = { 10, 20, 30, 40, 50 };

    for (int i = 0; i < 5; ++i) {
        cout << x[i] << endl;
    }

    // C++11, ranged-for
    // : index가 필요하지 않고, 요소의 값만 필요할 때
    for (auto e : x) {
        cout << e << endl;
    }
}