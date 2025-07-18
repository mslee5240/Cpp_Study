#include <iostream>

using namespace std;

class TestData {
public:
    // explicit 키워드로 암시적 변환 방지
    explicit TestData(int param) : nData(param) {
        cout << "TestData(int)" << endl;
    }
    // 이제 testFunc(5)는 컴파일 오류!
    // testFunc(TestData(5))만 가능

    TestData(const TestData& rhs) {
        cout << "TestData(const TestData&)" << endl;
    }

    int getData() {
        return nData;
    }

    // 타입 변환 연산자 (Type Conversion Operator)
    operator int(void) { // TestData 객체를 int로 변환하는 연산자
        return nData;
    }

    void setData(int param) {
        nData = param;
    }

private:
    int nData = 0;
};

void testFunc(TestData param) {
    cout << "TestFunc(): " << param.getData() << endl;
}

int main() {
    // 암시적 변환
    testFunc(5); // int 5 -> TestData 자동 변환
    // explcit 선언으로 암시적 변환 차단 -> 컴파일 에러

    // 명시적 변환
    testFunc(TestData(5));

    TestData obj(10);
    int value = obj;       // operator int() 호출되어 value = 10
    cout << value << endl; // 10 출력

    return 0;
}