#include <iostream>

int main() {
    int data = 10;

    int& ref = data;
    ref = 20;
    std::cout << data << std::endl; // 출력: 20

    /* 참조자의 주소를 출력해도 인스턴스의 주소가 출력됨.
     * 아래 둘의 출력 결과는 같음. */
    std::cout << &data << std::endl;
    std::cout << &ref << std::endl;

    int* p_data = &data;
    *p_data = 30;
    std::cout << data << std::endl; // 출력: 30
}