#include <iostream>

// 디폴트 매개변수와 조합 시 모호한 호출오류 발생

void test_func(int a) {
    std::cout << "test_func(int)" << std::endl;
}

void test_func(int a, int b = 10) {
    std::cout << "test_func(int, int)" << std::endl;
}

int main() {
    // test_func(5); 
    // 컴파일 오류 => 모호한 호출오류 발생

    return 0;
}