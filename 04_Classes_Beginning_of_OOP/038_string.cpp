#include <iostream>

using namespace std;

int main() {
    std::string hello = "Hello World";

    cout << (hello += "!!") << endl;

    return 0;
}