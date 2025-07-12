#include <iostream>

using namespace std;

// 클래스 멤버 선언 및 초기화

// 방법 1: 생성자 본문에서 초기화
class Test_1 {
public:
    // 생성자(디폴트)
    Test_1() {
        data1 = 10;  // 할당 (초기화가 아님)
        data2 = 20;
    }
    int data1, data2;

    void print_data() {
        cout << data1 << endl;
        cout << data2 << endl;
    }
};

// 방법 2: 초기화 리스트
class Test_2 {
public:
    // 생성자에서 초기화
    Test_2() : data1(10), data2(20) {
    }
    int data1, data2;
};

// 방법 3: 클래스 내 멤버 초기화
class Test_3 {
public:
    Test_3() {
    }
    int data1 = 10;
    int data2 = 20;
};

int main() {
    Test_1 test;
    test.print_data();

    return 0;
}