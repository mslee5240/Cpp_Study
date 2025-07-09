#include <iostream>

int main() {
    // new : 메모리 할당 (메모리 크기를 할당하지 않음)
    int* p_data = new int;
    int* p_new_data = new int(10);

    *p_data = 5;

    std::cout << *p_data << std::endl;
    std::cout << *p_new_data << std::endl;

    // delete : 메모리 해제
    delete p_data;
    delete p_new_data;

    return 0;
}