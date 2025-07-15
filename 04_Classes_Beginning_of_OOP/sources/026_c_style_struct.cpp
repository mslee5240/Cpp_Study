#include <stdio.h>

typedef struct USERDATA {
    int age;
    char name[32];
    void(*print_data)(struct USERDATA* p_user);
} USERDATA;

// 위 자료구조(구조체)와 강력히 의존하는 함수
void print_data(USERDATA* p_user) {
    printf("%d, %s\n", p_user->age, p_user->name);
}

int main() {
    // 선언과 정의와 초깃값 대입이 동시에 이루어지는 코드 (생성자와 비슷한 역할)
    USERDATA user = { 26, "민수", print_data};
    user.print_data(&user); // &user 대입이 어색함(희안한 코드) => C++에서는 생략
                            // C++에서 "this" 포인터로 대체됨.

    return 0;
}