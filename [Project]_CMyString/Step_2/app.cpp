#include <iostream>
#include "CMyString.h"
using namespace std;

int main() {
    CMyString hello;
    hello.setData("Hello");
    cout << hello.getData() << endl;
    cout << "length: " << hello.getLength() << endl;

    /* 상수화는 최대한 많이 하는 것이 좋음. */
    // *(hello.getData()) = 'A'; // const로 지정하지 않으면 => 값 변경 가능
    
}