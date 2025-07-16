#include <iostream>
#include "CMyString.h"
using namespace std;

int main() {
    CMyString hello;
    hello.setData("Hello");
    cout << hello.getData() << endl;
    
    // Issue 1번
    CMyString world(hello); // -> 복사 생성자 정의하여 해결

    /* 
    // Issue 2번
    CMyString world;
    world = hello; // 단순 대입 연산 -> 연산자 함수 정의하여 해결
    // world.operator=(hello); // 윗 줄과 같은 의미
    */
    cout << world.getData() << endl;

    return 0;
}