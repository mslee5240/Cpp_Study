#include <iostream>

using namespace std;

/* 컴파일 에러: "g_nData"이(가) 모호합니다. */
// using namespace Test;

int g_n_data = 100;

namespace Test {
    int g_n_data = 200;
}

int main() {
    cout << g_n_data << endl;

    return 0;
}