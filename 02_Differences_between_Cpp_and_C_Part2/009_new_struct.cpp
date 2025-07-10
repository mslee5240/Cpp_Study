#include <iostream>

typedef struct USERDATA {
    int age;
    char name[32];
} USERDATA;

void print_user_data(USERDATA* p_user) {
    printf("%d, %s\n", p_user->age, p_user->name);
}

int main() {
    // 구조체 메모리 할당
    USERDATA* p_new_user = new USERDATA;

    p_new_user->age = 26;
    strcpy_s(p_new_user->name, sizeof(p_new_user->name), "Minsoo");

    print_user_data(p_new_user);

    return 0;
}