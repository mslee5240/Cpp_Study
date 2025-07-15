#include <iostream>

using namespace std;

class MyPoint {
public:
    MyPoint(int x) {
        cout << "MyPoint(int)" << endl;
        if (x > 100) {
            x = 100;
        }
        this->x = x;
    }

    // 생성자 위임
    MyPoint(int x, int y) : MyPoint(x) {
        cout << "MyPoint(int, int)" << endl;
        if (y > 200) {
            y = 200;
        }
        this->y = y;
    }

    void print() {
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }

private:
    int x = 0;
    int y = 0;
};

int main() {
    MyPoint begin(110);
    begin.print();

    MyPoint end(50,250);
    end.print();

    return 0;
}

/* 출력 결과:
 * MyPoint(int)       // (8행)
 * x: 100             // (25행)
 * y: 0               // (26행)
 * MyPoint(int)       // (8행)
 * MyPoint(int, int)  // (17행)
 * x: 50              // (25행)
 * y: 200             // (26행)
*/