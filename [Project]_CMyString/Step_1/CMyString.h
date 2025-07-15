#pragma once

class CMyString {
public:
    CMyString();
    ~CMyString();

    char* getData() {
        return m_pszData;
    }

    // 입력받는 문자열을 읽기만 하고 수정하지 않을 거라면,
    // 반드시 const char*를 사용해야 함.
    void setData(const char* pParam);

private:
    char* m_pszData = nullptr;
};