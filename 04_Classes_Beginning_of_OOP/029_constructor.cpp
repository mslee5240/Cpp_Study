#include <iostream>

using namespace std;

class Test {
public:
    /* 반환형, 매개변수 없음. 
        * (디폴트)생성자 => 객체 자체 초기화 */
    Test() {
        cout << "Test::Test()" << endl;
    }

    /* 소멸자 */
    ~Test() {
        cout << "Test::~Test()" << endl;
    }
};

int main() {
    cout << "Begin main" << endl;
    Test test;
    cout << "End main" << endl;

    return 0;
}

/* 출력:
 * Begin main
 * Test::Test()
 * End main
 * Test::~Test()
 * */

/* 생성자
 * - 생성자는 객체가 생성되는 시점에 자동으로 호출되는 멤버 함수
 * - 객체의 생성은 인스턴스 선언 및 new 연산에 따른 동적 생성 두 경우
 * - 다중 정의 가능
 * - 전역 인스턴스가 존재 할 경우 main() 함수보다 생성자가 먼저 호출됨.
 * 
 * 소멸자
 * - 소멸자는 객체가 소멸하는 시점에 자동으로 호출되는 멤버 함수
 * - 다중 정의할 수 없음
 * - main() 함수가 끝난 후에도 호출될 수 있음.
 */