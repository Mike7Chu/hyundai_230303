// 10_for.cpp
#include <iostream>
using namespace std;

int main()
{
    int x[5] = { 10, 20, 30, 40, 50 };

    for (int i = 0; i < 5; ++i) {
        cout << x[i] << endl;
    }

    for (auto& e : x) {
        e += 10;
    }

    // C++11, ranged-for
    // : index가 필요하지 않고, 요소의 값만 필요할 때
    for (auto e : x) {
        cout << e << endl;
    }

    int n = 10;
    const auto n2 = n;

    int& r = n;
    auto& r2 = r; // r2 -> int
}