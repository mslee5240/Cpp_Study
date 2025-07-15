#include <iostream>
#include "CMyString.h"
using namespace std;

CMyString::CMyString() {
    cout << "CMyString()" << endl << endl;
}

CMyString::~CMyString() {
    cout << "~CMyString()" << endl << endl;
    delete[] m_pszData;
}

void CMyString::setData(const char* pParam) {
    // 메모리 누수 방지를 위해 초기화 하기.
    if (m_pszData != nullptr) {
        delete[] m_pszData;
    }

    size_t length = strlen(pParam);

    m_pszData = new char[length + 1];

    strcpy_s(m_pszData, length + 1, pParam);
    
    this->length = length;
}