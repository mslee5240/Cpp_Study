#include <iostream>
#include "CMyString.h"

using namespace std;

// 기본 생성자 (Default Constructor)
// - 빈 객체 생성 시 호출
// - 사용 예: CMyString str;
CMyString::CMyString() {
    cout << "CMyString()" << endl;
}

// 변환 생성자
// - 문자열을 받아서 객체 초기화
// - 사용 예: CMyString str("Hello");
CMyString::CMyString(const char* param) {
    cout << "CMyString(const char*)" << endl;
    this->setData(param);
}

// 복사 생성자 (Copy Constructor)
// - 기존 객체를 이용한 새 객체 생성
// - 사용 예: CMyString str2(str1); 또는 CMyString str2 = str1;
CMyString::CMyString(const CMyString& rhs) {
    cout << "CMyString(const CMyString&)" << endl;
    this->setData(rhs.getData());
}

// 소멸자 (Destructor)
CMyString::~CMyString() {
    cout << "~CMySting()" << endl;
    delete[] m_pszData;
}

void CMyString::setData(const char* pParam) {
    // 기존 메모리 해제 (메모리 누수 방지)
    if (m_pszData != nullptr) {
        delete[] m_pszData;
    }

    size_t length = strlen(pParam);
    this->length = length;

    m_pszData = new char[length + 1];
    strcpy_s(m_pszData, length + 1, pParam);
}