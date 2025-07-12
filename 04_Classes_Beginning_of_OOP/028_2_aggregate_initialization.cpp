#include <cstdio>
#include <cstring>

// 집계 클래스 - 중괄호 초기화 가능
class UserData {
public:
    int age;
    char name[32];

    void print() {
        printf("Age: %d, Name: %s\n", age, name);
    }
};

// 집계가 아닌 클래스 - 생성자 있음
class UserDataWithConstructor {
public:
    int age;
    char name[32];
    
    // 사용자 정의 생성자
    UserDataWithConstructor(int a, const char* n) {
        age = a;
        strncpy(name, n, sizeof(name) - 1);
        name[sizeof(name) - 1] = '\0';
    }
    
    void print() {
        printf("Age: %d, Name: %s\n", age, name);
    }
};

int main() {
    printf("=== 집계 초기화 예제 ===\n");
    
    // ✅ 집계 초기화 - 다양한 방법들
    UserData user1 = { 25, "Alice" };      // 완전 초기화
    UserData user2 = { 30 };               // 부분 초기화 (name은 0으로)
    UserData user3 = {};                   // 모든 멤버 0으로 초기화
    UserData user4{35, "Bob"};             // C++11 스타일
    
    printf("user1: "); user1.print();
    printf("user2: "); user2.print();
    printf("user3: "); user3.print();
    printf("user4: "); user4.print();
    
    printf("\n=== 생성자 호출 예제 ===\n");
    
    // ✅ 생성자 호출
    UserDataWithConstructor user5(40, "Charlie");
    UserDataWithConstructor user6{45, "Diana"};  // C++11 uniform initialization
    
    printf("user5: "); user5.print();
    printf("user6: "); user6.print();
    
    // ❌ 이건 컴파일 에러! (주석 해제하면 에러)
    // UserDataWithConstructor user7 = {50, "Error"};
    
    return 0;
}