#include <iostream>

using namespace std;

class TestData {
public:
    // 명시적 생성자
    // - explicit 키워드로 암시적 변환 방지 -> 의도하지 않은 자동 타입 변환 차단
    explicit TestData(int param) : nData(param) {
        cout << "생성자 호출" << endl << endl;
    }
    // 이제 testFunc(5)는 컴파일 오류!
    // testFunc(TestData(5))만 가능

    // 복사 생성자
    TestData(const TestData& rhs) {
        cout << "복사 생성자 호출" << endl << endl;
    }

    ~TestData() {
        cout << "소멸자 호출 ( " << this->nData << " )" << endl << endl;
    }

    int getData() {
        return nData;
    }

    // 타입 변환 연산자 (Type Conversion Operator)
    // - 자동 호출: int가 필요한 곳에서 암시적으로 사용됨
    // - 양방향 변환: 생성자(int -> TestData)와 반대 방향
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
    cout << "TestFunc(): " << param.getData() <<endl << endl;
}

int main() {
    // 암시적 변환 (explicit 없다면 가능)
    // - int 5 -> TestData 자동 변환
    // testFunc(5); // -> 컴파일 오류

    // 명시적 변환
    testFunc(TestData(5));

    // 직접 생성 - 생성자 호출 
    TestData obj(10);

    // 제한됨
    // TestData obj = 10; // -> 컴파일 오류

    // 자동 타입 변환
    int value = obj;  // operator int() 자동 호출 -> value = 10
    cout << "obj: " << value << endl << endl; // 출력: 10

    return 0;
}

/* 출력:
생성자 호출

TestFunc(): 5

소멸자 호출 ( 5 )

생성자 호출

obj: 10

소멸자 호출 ( 10 )
*/