#include <iostream>
#include "CMyString.h"

using namespace std;

// C 스타일 문자열을 받는 함수
void printHello(const char* param) {
    cout << "(const char*): " << param << endl;
}

// CMyString 객체 참조를 받는 함수
void printHello(const CMyString& param) {
    cout << "(const CMyString&): " << param << endl;
}

int main() {
    printHello( CMyString("Hello") );
    /* 실행 순서 분석
    CMyString("Hello") -> 변환 생성자 호출 -> 임시 객체 생성
    printHello( CMyString("Hello") ) -> 임시 객체가 참조 전달
                                -> 복사 생성자 호출 X (참조 전달)
    함수 내부 실행
    cout << param -> operator const char*() 자동 호출 (cout이 const char*를 기대하므로)
                  -> CMyString 객체가 자동으로 const chat*로 변환
                  -> 함수 호출 완료 후 임시 객체 소멸
    */

    return 0;
}