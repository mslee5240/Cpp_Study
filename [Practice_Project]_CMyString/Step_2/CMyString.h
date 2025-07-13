#pragma once

class CMyString {
public:
    CMyString();
    ~CMyString();

    const char* getData() const {
        return m_pszData;
    }

    size_t getLength() const {
        // this->length = 0; // const 키워드 => 컴파일 타임에 에러 발생(장점)
        return this->length;
    }

    void setData(const char* pParam);

private:
    char* m_pszData = nullptr;
    size_t length = 0;
};