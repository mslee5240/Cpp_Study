#include <cstdio>

class UserData {
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

    user_1.print(); // 출력: 10, Hoon
    user_2.print(); // 출력: 26, Minsoo

    return 0;
}