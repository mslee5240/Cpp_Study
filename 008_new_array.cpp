#include <iostream>

int main() {
    // 배열 메모리 할당
    int* p_arr = new int[5];

    for(int i = 0; i < 5; ++i)
        p_arr[i] = (i + 1) * 10;

    for(int i = 0; i < 5; ++i)
        std::cout << p_arr[i] << std::endl;

    /* (주의) 메모리 해제할 때 배열 형태로 해제해야 함.
     *       누락하면 하나만 삭제됨. */
    delete [] p_arr;
}