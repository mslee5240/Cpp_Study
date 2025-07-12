#include <iostream>

using namespace std;

// 1. 사용자 정의 생성자
class Test1 {
public:
    Test1();    // 선언만
    int data = 5;
};

Test1::Test1() { // 클래스 밖에서 구현 (전역 함수처럼)
    cout << "Test1 사용자 정의 생성자 호출됨" << endl;
}

// 2. 기본 생성자 (= default)
class Test2 {
public:
    Test2() = default;  // 컴파일러가 자동 생성
    int data = 5;
};

// 3. 생성자 삭제 (= delete)
class Test3 {
public:
    Test3() = delete;   // 기본 생성자 사용 금지
    Test3(int val) : data(val) {  // 다른 생성자는 제공
        cout << "Test3 매개변수 생성자 호출됨: " << val << endl;
    }
    int data;
};

// 4. 아무것도 정의하지 않은 경우 (컴파일러가 자동 생성)
class Test4 {
public:
    int data = 5;
    // 컴파일러가 자동으로 기본 생성자 생성
};

int main() {
    cout << "=== 1. 사용자 정의 생성자 ===" << endl;
    Test1 a;
    cout << "a.data = " << a.data << endl << endl;

    cout << "=== 2. = default 생성자 ===" << endl;
    Test2 b;
    cout << "b.data = " << b.data << endl << endl;

    cout << "=== 3. = delete 생성자 ===" << endl;
    // Test3 c;   // 컴파일 에러!
    Test3 c(10);  //  매개변수 생성자 사용
    cout << "c.data = " << c.data << endl << endl;

    cout << "=== 4. 컴파일러 자동 생성 ===" << endl;
    Test4 d;
    cout << "d.data = " << d.data << endl;

    return 0;
}