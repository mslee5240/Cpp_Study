#include <iostream>

void test_func(int& r_param) {
    r_param = 10;
}

int main() {
    int data = 0;

    test_func(data);
    
    std::cout << data << std::endl;

    return 0;
}