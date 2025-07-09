#include <iostream>

int main() {
    int a = 10;

    // C++에서는 변수의 초깃값을 소괄호 속에 기술
    int b(10);
    int c(a);

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    return 0;
}