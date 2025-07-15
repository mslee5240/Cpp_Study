#include <iostream>

using namespace std;

class MyData {
public:
    MyData() : data(0) {}

    int getData() {
        return data;
    }

    // int는 허용
    void setData(int data) {   
        this->data = data;
    }

    // double은 금지 (특정 타입의 함수 호출을 명시적으로 금지)
    void setData(double data) = delete;

private:
    int data;
};

int main() {
    MyData a;

    a.setData(10);
    cout << a.getData() << endl; // 출력: 10

    MyData b;

    //b.setData(5.5); // 이 줄을 주석 해제하면 컴파일 에러!
    cout << b.getData() << endl; // 출력: 0 (기본값)

    return 0;
}