// 35_STL.cpp
#include <iostream>
using namespace std;

// STL(Standard Template Library)
// - 1979년: C++ 탄생
// - 1990년: C++ 표준 위원회 설립
// - 1998년: C++ 1차 표준안, STL이 도입

// STL 구성 요소
// 1) 컨테이너: 데이터를 저장하기 위한 자료구조
//   선형적인 자료 구조: vector, list, array, deque
//   탐색 자료 구조: map, set, unordered_map, unordered_set

// 2) 알고리즘
//    컨테이너의 요소를 검색, 정렬, 이진 탐색 등의 알고리즘을 제공하는
//    '일반 함수'

// 3) 반복자
//    컨테이너의 요소를 열거하기 위해, 배열에서 포인터의 역활과 비슷하게
//    동작하는 객체입니다.

#include <string>
#include <complex>

int main()
{
    string s1 = "hello";
    cout << s1 << endl;

    complex<int> c1(10, 20);
    complex<int> c2(20, 30);
    cout << c1 + c2 << endl;
    cout << c1.imag() << endl;
    cout << c1.real() << endl;
}