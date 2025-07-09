#include <iostream>

/* r-value 참조(&&)는 연산 결과로 생성되는
 * 이름 없는 임시 객체에서 이름을 부여하고
 * 해당 객체의 수명을 연결된 범위까지 연장함. 
 * 
 * 주로 복사 비용이 큰 객체에서 유용
 * 
 * 반환 자료형에 임시 객체가 자주 생긴다는 것을 이해하기 
 */

int test_func(int param) {
    int result = param * 2;

    return result;
}

int main() {
    int input = 0;

    std::cout << "Input number: ";
    std::cin >> input;

    // &&연산자의 동작을 보여주기 위한 예시
    int&& r_data = (input + 5);
    std::cout << r_data << std::endl;

    int&& result = test_func(10);

    result += 10;
    std::cout << result << std::endl;

    return 0;
}