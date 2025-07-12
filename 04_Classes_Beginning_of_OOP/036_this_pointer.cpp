#include <iostream>

using namespace std;

class MyData {
public:
    // 생성자와 초기화 리스트
    MyData(int data) : data(data) {}

    void printData() {
        cout << data << endl;               // 직접 접근
        cout << MyData::data << endl;       // 클래스 스코프 명시
        cout << this->data << endl;         // this 포인터 사용
        cout << this->MyData::data << endl; // this + 스코프
    }

private:
    int data;
};

int main() {
    MyData a(5), b(10);

    a.printData();
    b.printData();

    return 0;
}