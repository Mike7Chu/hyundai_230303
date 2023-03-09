// 34_예외3.cpp
#include <iostream>
using namespace std;

// 오류 코드를 전달할 경우, 오류의 원인을 파악하기 어렵습니다.
// > C++은 오류의 종류에 따라서 사용자 정의 타입을 제공합니다.

// 1. 사용자 정의 타입
// class InvalidFilenameException { };
// class OutOfMemoryException { };

// 2. std::exception의 하위 클래스로 예외 타입을 정의할 수
//    있습니다.
// - noexcept: 함수가 예외가 없음을 알립니다.

class InvalidFilenameException : public exception {
public:
    const char* what() const noexcept override
    {
        return "Invalid Filename";
    }
};

class OutOfMemoryException : public exception {
public:
    const char* what() const noexcept override
    {
        return "Out of Memory";
    }
};

int foo(int value)
{
    if (value == 0) {
        throw InvalidFilenameException();
    } else if (value == 1) {
        throw OutOfMemoryException();
    }

    return 0;
}

int main()
{
    try {
        foo(0);
    } catch (InvalidFilenameException& error) {
        cout << error.what() << endl;
    } catch (OutOfMemoryException& error) {
        cout << error.what() << endl;
    }

    try {
        foo(0);
    } catch (InvalidFilenameException& error) {
        cout << "Invalid Filename" << endl;
    } catch (OutOfMemoryException& error) {
        cout << "Out of Memory" << endl;
    }
}

#if 0
int foo(int value)
{
    if (value == 0) {
        throw -100; // 잘못된 파일 이름의 에러 코드
    } else if (value == 1) {
        throw -200; // 메모리가 부족할 때의 에러 코드
    }

    return 0;
}

int main()
{
    try {
        foo(1);
    } catch (int& error) {
        cout << error << endl;
    }
}
#endif