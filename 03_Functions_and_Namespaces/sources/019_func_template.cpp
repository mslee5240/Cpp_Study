#include <iostream>

// 함수 템플릿: 함수 다중 정의를 대체 할 수 있는 문법

template <typename T>
T add(T a, T b) {
    return (a + b);
}

int main() {
    // 템플릿은 사용된 타입마다 인스턴스가 생성.
    // 같은 타입으로 여러 번 호출해도 템플릿 인스턴스는 한 번만 생성됨.
    std::cout << add(3, 4) << std::endl;
    std::cout << add(3.3, 4.4) << std::endl;

    return 0;
}