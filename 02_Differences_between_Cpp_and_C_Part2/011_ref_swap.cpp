#include <iostream>

void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int x = 10, y = 20;

    swap(x, y);

    std::cout << "x: " << x << std::endl; // 출력: 20
    std::cout << "y: " << y << std::endl; // 출력: 10

    return 0;
}