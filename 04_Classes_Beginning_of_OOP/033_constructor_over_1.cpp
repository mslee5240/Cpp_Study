#include <iostream>

using namespace std;

class MyData {
public:
    MyData(int nParam) : nData(nParam) {
    }

    MyData(int x, int y) : nData(x + y) {
    }

    int getData(void) {
        return nData;
    }

private:
    int nData = 0;
};

int main() {
    MyData a(10);
    MyData b(3, 4);

    cout << a.getData() << endl; // 출력: 10
    cout << b.getData() << endl; // 출력: 7

    return 0;
}