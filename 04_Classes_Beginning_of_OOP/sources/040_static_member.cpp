#include <iostream>

using namespace std;

/* 정적 멤버 => Multi Thread 환경에서 이슈 발생 가능성 (주의) */
class Test {
public:
    Test(int data) : nData(data) {
        nCount++;   // 보통 인스턴스의 개수 셀 때 사용
    }

    int getData() {
        return nData;
    }

    void resetCount() {
        nCount = 0;
    }

    // 정적 메서드 => this 포인터 접근 불가
    static int getCount() {
        return nCount;
    }

private:
    int nData = 0;      // 각 인스턴스마다 고유한 값을  가짐.
    static int nCount;  // 모두가 같은 값음 가짐.
};

// 정적 멤버는 정의를 class 밖에서 해야함.
int Test::nCount = 0;

int main() {
    Test a(5), b(10);

    cout << a.getCount() << endl;   // 출력: 2
    b.resetCount(); // 정적 변수 리셋

    /* 정적 메서드 => 인스턴스 선언 없이도 호출 가능 */
    cout << Test::getCount() << endl;   // 출력: 0

    return 0;
}