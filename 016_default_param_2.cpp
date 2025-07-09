#include <iostream>

/* 매개변수 디폴트 값은 반드시 오른쪽부터 선언해야 함
 * 여러 매개변수에 대해 초깃값을 기술 할 경우 반드시 연속되어야 함 */

int test_func(int param_1, int param_2 = 2) {
    return (param_1 * param_2);
}

int main() {
    std::cout << test_func(10) << std::endl;    // 출력: 20
    std::cout << test_func(10, 5) << std::endl; // 출력: 50

    return 0;
}