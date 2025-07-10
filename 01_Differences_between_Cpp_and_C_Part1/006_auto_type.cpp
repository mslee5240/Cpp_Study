#include <iostream>

int main() {
    int a = 10;
    int b(10);

    /* auto : 자동변수 선언이 아닌 
     *       초깃값의 형식을 자동으로 따르도록 하는 것 */
    auto c(a);

    std::cout << c << std::endl;

    return 0;
}