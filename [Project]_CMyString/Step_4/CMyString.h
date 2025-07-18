#pragma once

class CMyString {
public:
    // 기본 생성자
    CMyString(); 

    // 매개변수 생성자 (explicit 키워드로 암시적 변환 방지)
    explicit CMyString(const char* param); 

    // 복사 생성자
    CMyString(const CMyString& rhs); 
    
    // 소멸자
    ~CMyString(); 

    const char* getData() const {
        return m_pszData;
    }

    // 타입 변환 연산자 (Type Conversion Operator)
    // CMyString 객체를 const char* 타입으로 자동 변환
    operator const char* () const {
        return m_pszData;
    }

    size_t getLenght() const {
        return this->length;
    }

    void setData(const char* pParam);

    void operator=(const CMyString& rhs) {
        this->setData(rhs.getData());
    }

private:
    char* m_pszData = nullptr;
    size_t length = 0;
};