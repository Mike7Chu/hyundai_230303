// 33_연산자오버로딩4.cpp
#include <iostream>
// using namespace std;
using std::cout;
using std::endl;

namespace xstd {
class istream {
public:
    istream& operator>>(int& n)
    {
        scanf("%d", &n);
        return *this;
    }

    istream& operator>>(double& d)
    {
        scanf("%lf", &d);
        return *this;
    }
};

istream cin;
}

using xstd::cin;

int main()
{
    int n;
    double d;
    cin >> n >> d;
    // cin.operator>>(n).operator>>(d)

    cout << n << ", " << d << endl;
}

#if 0
int main()
{
    int n;
    cin >> n;
    // cin.operator>>(n)
    // cin.operator>>(int&)

    cout << n << endl;

    double d;
    cin >> d;
    // cin.operator>>(d)
    // cin.operator>>(double&)

    cout << d << endl;
}
#endif