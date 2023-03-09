// 35_STL2.cpp
#include <iostream>
using namespace std;

// 1. 컨테이너 특징
// 1) 템플릿 기반입니다.
//    다양한 타입에 대해서 사용할 수 있습니다.

// 2) 멤버 함수의 이름이 유사합니다.
//     |----------------------|
// push_front    insert     push_back
//  pop_front    erase      pop_back
//   front                  back

// 3) vector는 연속된 메모리입니다.
//  - 임의 접근이 가능합니다.
//  - push_front 기능을 지원하지 않습니다.

//    list는 연속된 메모리가 아닌 노드 기반의 선형 자료구조 입니다.
//  - 데이터를 자유롭게 삽입하거나 삭제하는 것이 유용합니다.
//  - 임의 접근 연산을 제공하지 않습니다.

// 4) 데이터를 제거하는 연산과, 데이터를 참조하는 연산이 분리되어 있습니다.
//    pop_back
//    back
//  => 참조 반환을 위해, 분리되어 있습니다.

#include <vector>
#include <list>

int main()
{
    vector<int> v = { 10, 20, 30, 40, 50 };
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << v.back() << endl;

    cout << v[3] << endl; // 임의 접근 연산
    // v.push_front(10); // vector는 push_front 연산을 제공하지 않습니다.

    list<int> l = { 10, 20, 30 };
    l.push_front(200);
    // cout << l[1] << endl; - 리스트는 임의 접근 연산자를 제공하지 않습니다.
}