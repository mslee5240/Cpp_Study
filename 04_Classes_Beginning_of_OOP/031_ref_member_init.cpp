#include <iostream>

using namespace std;

class Test {
    private:
        int& data;  // 참조자는 선언과 동시에 초기화 필요
    public:
        // 생성자 다중 정의
        Test(int& data) : data(data) {
        }

        int get_data() {
            return data;
        }
};

int main() {
    int a = 10;
    Test test(a);

    cout << test.get_data() << endl; // 출력: 10

    a = 20;
    cout << test.get_data() << endl; // 출력: 20

    return 0;
}

/* - 디폴트 생성자 없어도 됨.
 * - 대신 생설할 때 매개변수를 무조건 전달해야함. */


/* 기본 생성자를 명시적으로 삭제하여 객체 생성을 금지함.
 * Test() = delete; 
 */

/* 컴파일러가 자동으로 생성하는 기본 생성자를 명시적으로 사용하겠다는 의미
 * Test() = default;    // 컴파일러 최적화 + 명확한 의도
 * Test() = {}          // 동일한 동작이지만 덜 명확함.
 * */