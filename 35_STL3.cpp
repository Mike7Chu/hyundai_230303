// 35_STL3.cpp
#include <iostream>
using namespace std;

// 반복자(Iterator)
// : 배열에서 포인터의 역활과 유사한 객체입니다.

// 1. C++의 구간 표현 방법 => 반개 구간을 사용합니다.
//   - 시작은 포함되지만, 마지막은 포함되지 않습니다.
//    [begin, end): 반개구간
#if 0
int main()
{
    //           p1              p2
    int x[5] = { 1, 2, 3, 4, 5 };

    int* p1 = x; // 시작
    int* p2 = x + 5; // 끝 다음 위치, past the end

    while (p1 != p2) {
        cout << *p1 << endl;
        ++p1;
    }
}
#endif

#include <vector>

// begin(): vector의 시작 위치
//   end(): vector의 끝 다음 위치(past the end)
#if 0
int main()
{
    //           p1              p2
    vector<int> x = { 1, 2, 3, 4, 5 };

    auto p1 = x.begin(); // 시작
    auto p2 = x.end(); // 끝 다음 위치, past the end

    // vector<int>::iterator p1 = x.begin(); // 시작
    // vector<int>::iterator p2 = x.end(); // 끝 다음 위치, past the end

    while (p1 != p2) {
        cout << *p1 << endl;
        ++p1;
    }
}
#endif

#if 0
#include <list>

int main()
{
    //           p1              p2
    list<int> x = { 1, 2, 3, 4, 5 };

    auto p1 = x.begin(); // 시작
    auto p2 = x.end(); // 끝 다음 위치, past the end

    while (p1 != p2) {
        cout << *p1 << endl;
        ++p1;
    }
}
#endif

// 일반 함수 begin / end
//  - 배열, vector, list 간의 전환이 좀더 쉽습니다.
#include <list>
int main()
{
    //           p1              p2
    // int x[5] = { 1, 2, 3, 4, 5 };
    list<int> x = { 1, 2, 3, 4, 5 };

    auto p1 = begin(x); // 시작
    auto p2 = end(x); // 끝 다음 위치, past the end

    while (p1 != p2) {
        cout << *p1 << endl;
        ++p1;
    }
}