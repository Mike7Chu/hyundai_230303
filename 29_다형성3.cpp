// 29_다형성3.cpp
#include <iostream>
#include <vector>
using namespace std;

// 2. 동종을 보관하는 컨테이너를 사용할 수 있습니다.
class Animal { };
class Dog : public Animal { };
class Cat : public Animal { };

int main()
{
    vector<Animal*> v;
    v.push_back(new Dog);
    v.push_back(new Cat);
}

#if 0
class Dog { };
class Cat { };

int main()
{
    vector<Dog*> v1;
    v1.push_back(new Dog);
    v1.push_back(new Dog);
    v1.push_back(new Dog);

    vector<Cat*> v2;
    v2.push_back(new Dog); // !!
}
#endif

#if 0
#include <vector> // 동적 배열, 연속된 메모리
#include <list> // 연결 리스트, 노드 형태 구조
// "컨테이너(Collection)"

int main()
{
    list<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << v.size() << endl;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << v.size() << endl;
}
#endif