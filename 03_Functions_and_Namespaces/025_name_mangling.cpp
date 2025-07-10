#include <iostream>

using namespace std;

/* 선언해서 링크 오류를 만들면 name mangling된 함수 이름 확인 가능 */
// void test_func(); // 에러 출력: "?test_func@@YAXXZ"
void test_func() {
    cout << "::test_func()" << endl;
}

namespace Test {
    // void test_func(); // 에러 출력: "?test_func@Test@@YAXXZ"
    void test_func() {
        cout << "Test::test_func()" << endl;
    }
}

namespace My_Data {
    void test_func() {
        cout << "My_Data::test_func()" << endl;
    }
}

int main() {
    test_func();        // 출력: ::test_func()
    ::test_func();      // 출력: ::test_func()
    Test::test_func();  // 출력: Test::test_func()
    My_Data::test_func; // 출력: My_Data::test_func()

    return 0;
}