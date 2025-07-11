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
    cout << "Begin main" << endl;
    Test test;
    cout << "End main" << endl;

    return 0;
}