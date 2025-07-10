#include <iostream>

int test_func(int param = 10) {
    return param;
}

int main() {
    std::cout << test_func() << std::endl;   //출력: 10
    std::cout << test_func(20) << std::endl; //출력: 20

    return 0;
}