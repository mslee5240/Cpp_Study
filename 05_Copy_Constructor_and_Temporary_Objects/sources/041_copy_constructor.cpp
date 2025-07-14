#include <iostream>

using namespace std;

class MyData {
public:
    MyData() {
        cout << "MyData()" << endl;
    }

    // 복사 생성자 (const 참조 매개변수: 원본 객체가 변경되지 않도록 보장)
    MyData(const MyData& rhs) : nData(rhs.nData) {  // rhs(Right Hand Side: 대입 연산자의 오른쪽에 오는 값을 의미)
        cout << "MyData(const MyData&)" << endl;
    }

    /* // 같은 동작하는 코드
    MyData(const MyData& rhs) {
        cout << "MyData(const MyData&)" << endl;
        this->nData = rhs.nData;
    } */

    int getData() {
        return nData;
    }

    void setData(const int data) {
        nData = data;
    }

private:
    int nData = 0;
};

int main() {
    MyData a;       // 1. 기본 생성자 호출 -> "MyData()" 출력
    a.setData(10);  // 2. nData = 10 설정

    MyData b(a);    // 3. 복사 생성자 호출 -> "MyDaya(const MyData&)" 출력
                    // a의 nData(10)를 b의 nData에 복사

    cout << b.getData() << endl; // 4. "10" 출력

    return 0;
}

/* 출력:
MyData()
MyData(const MyData&)
10
*/