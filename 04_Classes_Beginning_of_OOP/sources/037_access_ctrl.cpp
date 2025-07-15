#include <iostream>

using namespace std;

// 디버깅해서 어셈블리어까지 분석해보기!
// this 포인터가 히든 파라미터로 넘겨지는 것 확인!
class MyData {
private:
    int data;

public:
    int getData() {
        return data;
    }

    void setData(int data) {
        this->data = data;
    }
};

int main() {
    MyData data;
    data.setData(10);

    cout << data.getData() << endl; // 출력: 10

    return 0;
}