#include <iostream>

// using 선언하면 호출할 때 네임스페이스 생략 가능
using namespace std;

namespace Test {
    int n_data = 100;

    void test_func() {
        cout << "Test::test_func()" << endl;
    }
}

using namespace Test;

int main() {
    test_func();            // 출력: Test::test_func()
    cout << n_data << endl; // 출력: 100

    return 0;
}