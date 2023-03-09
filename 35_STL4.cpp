// 35_STL4.cpp
#include <iostream>
using namespace std;

// 컨테이너: 자료 구조
//  반복자: 컨테이너를 순회하고 열거하는 객체
// 알고리즘: 컨테이너를 탐색하고 정렬하는 일반 함수 집합
#include <vector>
#include <algorithm>

// 1. 반개 구간을 사용합니다.
// 2. 검색 알고리즘의 실패로 past the end를 사용합니다.

// 3. 모든 컨테이너가 동일하게 이용할 수 있는
//    "일반 함수"로 설계되어 있습니다.
// vector
// list   ----->  반복자 ----> find 일반 함수
// deque                     "알고리즘"
// array

int main()
{
    // int x[5] = { 10, 20, 30, 40, 50 };
    vector<int> x = { 10, 20, 30, 40, 50 };

    auto p = find(begin(x), end(x), 30);

    // 알고리즘의 실패를 표현할 때,
    // 끝 다음 위치값을 사용합니다.
    if (p != end(x)) {
        cout << *p << endl;
    } else {
        cout << "찾을 수 없습니다." << endl;
    }
}
