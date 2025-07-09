#include <iostream>

// Range-based for statement (범위 기반 for 문)

int main() {
    int list[] = { 10, 20, 30, 40, 50, 60 };

    // 1. 전통적인 C 스타일 for문
    for (int i = 0; i < 5; ++i)
        std::cout << list[i] << ' '; // 출력: 10 20 30 40 50
    std::cout << std::endl; 

    /* 2. 범위 기반 for문 (값 복사 방식)
     *   => 유지보수성과 가독성이 크게 향상됨. */ 
    for (auto element : list)
        std::cout << element << ' '; // 출력: 10 20 30 40 50 60
    std::cout << std::endl;
    
    /* 3. 범위 기반 for문 (참조 방식)
     *   => &참조자 사용으로 원본 배열의 값을 직접 수정 가능 */
    for (auto& element : list)
        element = 5; // 모든 원소의 값을 5로 변경
    std::cout << std::endl;

    /* 참조자(&)를 사용하지 않을 때의 문제점:
     *     값이 복사되어 임시 객체가 생성되므로 
     *     원본 배열은 변경되지 않음
     * 
     * for (auto element : list)
     *  	element = 5; // 복사본만 변경됨, 원본은 그대로
     */

    /* 4. 범위 기반 for문 (const 참조 방식)
     *   => 복사 오버헤드는 피하면서 값 변경은 방지 */
    for (const auto& element : list)
        std::cout << element << ' '; // 출력: 5 5 5 5 5 5
    std::cout << std::endl;

    return 0;
}