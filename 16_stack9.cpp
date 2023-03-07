// stack9.cpp
#include <iostream>
using namespace std;

// 표준 라이브러리에 이미 stack이 있습니다.
// "템플릿"으로 만들어져 있습니다.

#include <stack>

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    // 데이터를 제거하는 연산과, 참조하는 연산이 분리되어 있습니다.
    // - 객체를 값으로 반환하면, 반환용 임시 객체 생성/해지의 비용이 발생합니다.

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
}