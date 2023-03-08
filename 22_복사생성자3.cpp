// 22_복사생성자3.cpp
#include <iostream>
using namespace std;

class Sample {
public:
    Sample() { cout << "Sample()" << endl; }
    ~Sample() { cout << "~Sample()" << endl; }

    Sample(const Sample&) { cout << "Sample(const Sample&)" << endl; }
};

// 1. 지역 객체를 참조로 반환하면 안됩니다.
// 2. 지역 객체를 값으로 반환하면, 복사 생성의 비용이 발생합니다.
// 3. RVO(Return Value Optimization)
//   - 임시 객체로 반환하면, 복사 생성 비용을 최적화할 수 있습니다.
// 4. NRVO(Named RVO)
//   - msvc 2022
Sample foo()
{
    Sample s;
    return s;

    // return Sample(); // 임시 객체 생성 문법
}

int main()
{
    cout << "------" << endl;
    foo();
    cout << "------" << endl;
}