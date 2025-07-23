#include <iostream>
using namespace std;

class TestData {
public:
    /* 변환 생성자(Conversion Constructor)
     * - 매개변수가 하나인 생성자 
     * - 다른 타입을 자동으로 해당 클래스 타입으로 변환 */
    TestData(const int data) : nData(data) {
        cout << "TestData(int)" << endl;
    }

    /* 복사 생성자 
     * - 함수 변환 시 임시 객체 생성에 사용됨 */
    TestData(const TestData& rhs) : nData(rhs.nData) {
        cout << "TestData(const TestData&)" << endl;
    }

    /* 소멸자 */
    ~TestData() {
        cout << "~TestData( " << nData << " )" << endl;
    }

    int getData() const {
        return nData;
    }

    void setData(const int data) {
        cout << "setData( " << data << " )" << endl;
        nData = data;
    }

private:
    int nData = 0;  // 멤버 변수 초기화
};

/* 값에 의한 전달, 값에 의한 반환 -> 임시 객체 생성*/
TestData testFunc(TestData rhs) {
    cout << "Begin of testFunc()" << endl;
    rhs.setData(20);

    // 값에 의한 반환이므로 복사 생성자 호출
    cout << "End of testFunc()" << endl;
    return rhs; // 지역 변수 rhs의 복사본(임시 객체) 생성하여 반환
}

int main() {
    cout << "Begin of main()" << endl;
    testFunc(10); // = TestData rhs(10);
    // 임시객체 생성 -> 활용X -> 임시 객체의 의존 상실 -> 소멸
    
    cout << "End of main()" << endl;

    return 0;
}

/* 출력:
Begin of main()
TestData(int)
Begin of testFunc()
setData( 20 )
End of testFunc()
TestData(const TestData&)
~TestData( 20 )
~TestData( 20 )
End of main()
*/