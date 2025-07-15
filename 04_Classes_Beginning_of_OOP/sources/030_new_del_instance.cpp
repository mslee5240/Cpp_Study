#include <iostream>

using namespace std;

class Test {
public:
    Test() {
        cout << "Test::Test()" << endl;
    }

    ~Test() {
        cout << "Test::~Test()" << endl;
    }
};

int main() {
    cout << "Begin" << endl;

    Test* pTest = new Test;

    cout << "Test" << endl;

    delete pTest;   // delete를 부르지 않으면 메모리 소멸됨 => 소멸자가 불리지 않기 때문

    cout << "End" << endl;

    return 0;
}

/* 출력:
 * Begin
 * Test::Test()
 * Test
 * Test::~Test()
 * End
 */