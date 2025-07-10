#include <iostream>

using namespace std;

int data = 200;

namespace Test {
    int data = 100;

    void test_func() {
        cout << data << endl;
    }
}

int main() {
    Test::test_func(); // 출력: 100
    
    return 0;
}