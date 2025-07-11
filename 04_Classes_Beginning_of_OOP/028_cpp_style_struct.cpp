#include <cstdio>

// class 대신 struct로 정의하면 접근 제어 지시자 사용 못함.
// 오직 public 접근
struct USERDATA {
    int age;
    char name[32];

    void print() {
        printf("%d, %s\n", age, name);
    }
};

int main() {
    USERDATA user = { 26, "민수" };
    user.print();

    return 0;
}