#include <cstdio>

class UserData {
    // 접근 제어 지시자
    public:
        int age;
        char name[32];

        void print() {
            printf("%d, %s\n", age, name);
        }
};

int main() {
    UserData user_1 = { 10, "Hoon" };
    UserData user_2 = { 26, "Minsoo" };

    // 매서드
    // 매개변수는 void이지만, 인스턴스의 주소가 자동으로 전달됨.
    user_1.print(); // 출력: 10, Hoon
    user_2.print(); // 출력: 26, Minsoo

    return 0;
}

/* 함수는 클래스 인스턴스의 메모리 공간을 소모하지 않음. */
/* 클래스 멤버 함수라 하더라도 결국 C언어의 함수처럼 고유하게 존재함. */