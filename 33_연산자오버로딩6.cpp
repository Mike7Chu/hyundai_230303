// 33_연산자오버로딩6.cpp
#include <iostream>
namespace xstd {
class ostream {
public:
    ostream& operator<<(int n)
    {
        printf("%d", n);
        return *this;
    }
    ostream& operator<<(char ch)
    {
        printf("%c", ch);
        return *this;
    }

    ostream& operator<<(ostream& (*f)(ostream& os))
    {
        // f(*this);
        // return *this;
        return f(*this);
    }
};
ostream cout;

// ostream& (*)(ostream& os)
ostream& endl(ostream& os)
{
    os << '\n';
    return os;
}

}

using namespace std;

// 1. endl의 정체는 함수입니다.
// 2. ostream은
//        ostream& operator<<(ostream& (*f)(ostream& os))
//    위의 연산자 재정의 함수를 제공합니다.
//    - endl(cout)  사용하는 것이 아니라,
//      cout << endl 형태로 사용할 수 있습니다.

// 3. endl, IO 조정자(조작자, Manipulator)
//    위의 형태로 다양한 함수를 제공해서 사용할 수 있습니다.
//    "확장성"

ostream& menu(ostream& os)
{
    os << "1. 이자카야" << endl;
    os << "2. 오마카세" << endl;
    os << "3. 곱창" << endl;
    return os;
}

int main()
{
    cout << menu << menu << menu;

    int n = 42;
    cout << n;
    // cout.operator<<(int)

    // endl(cout);
    cout << endl;
    // cout.operator<<(endl);
    // -> ostream& operator<<(ostream& (*f)(ostream& os))
}