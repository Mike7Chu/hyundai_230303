// 0_QnA7.cpp
#include <iostream>
using namespace std;

int main()
{

    int score;
    cin >> score;

    char grade;
    if (score >= 70) {
        grade = 'P';
    } else {
        grade = 'F';
    }

    // 위의 코드는 3항 연산자를 통해 표현할 수 있습니다.
    grade = (score >= 70) ? 'P' : 'F';

    cout << grade << endl;
}