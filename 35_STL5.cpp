// 35_STL5.cpp
#include <iostream>
using namespace std;

#include <vector>
#include <algorithm> // sort

bool cmp1(int a, int b)
{
    cout << "cmp1" << endl;
    return a < b;
}

class Cmp {
public:
    inline bool operator()(int a, int b) { return a > b; }
};

// 1. inline 함수라도, 함수 포인터를 통해 전달되어 호출되면
//    인라인화가 불가능합니다.

// 2. 함수 객체는 정책으로 전달하였을 때,
//    인라인 최적화가 가능합니다.

int main()
{
    vector<int> v = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
    // sort(begin(v), end(v), cmp1);
    //                        bool (*)(int, int)

    Cmp cmp;
    sort(begin(v), end(v), cmp);
    // sort(begin(v), end(v), cmp);
    //                        Cmp

    // C++11에서 함수 객체를 만드는 새로운 문법이 도입되었습니다.
    // => Lambda Expression
    //  람다 표현식: 익명의 함수 객체를 만드는 기술
    sort(begin(v), end(v), [](int a, int b) {
        return a < b;
    });

    for (auto e : v) {
        cout << e << endl;
    }
}