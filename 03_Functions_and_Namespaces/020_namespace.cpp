#include <iostream>

namespace Test {
    int data = 100;

    void test_func() {
        std::cout << "Test::TestFunc()" << std::endl;
    }
}

int main() {
    Test::test_func(); // 출력: Test::TestFunc()

    std::cout << Test::data << std::endl; // 출력: 100

    return 0;
}