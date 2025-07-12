#include <iostream>
#include "CMyString.h"

using namespace std;

CMyString::CMyString() {
    cout << "CMyString()" << endl;
}

CMyString::~CMyString() {
    cout << "~CMyString()" << endl;
    delete[] m_pszData;
}

void CMyString::setData(const char* pParam) {
    // 여러번 호출될 경우에 대비해야 함.
    // null인지 검사 안하면 => 메모리 누수됨.
    if (m_pszData != nullptr) {
        delete[] m_pszData;
    }

    size_t length = strlen(pParam);
    m_pszData = new char[length + 1];

    strcpy_s(m_pszData, length + 1, pParam);
}