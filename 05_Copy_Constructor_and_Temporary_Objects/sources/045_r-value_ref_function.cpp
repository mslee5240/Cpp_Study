#include <iostream>

using namespace std;

// 변수(lvalue) reference (좌측값 참조)
void testFunc(int& value) {
    cout << "testFunc(int&)" << endl;
}

// 임시값(rvalue) reference (우측값 참조)
void testFunc(int&& value) {
    cout << "testFunc(int&&)" << endl;
}

int main() {
    int data(10);
    testFunc(data);  // 출력: testFunc(int&)

    // 상수는 임시값(객체) 
    testFunc(3);     // 출력: testFunc(int&&)
    testFunc(3 + 4); // 출력: testFunc(int&&)

    return 0;
}

/*
lvalue (Left Value - 좌측값)
- 이름이 있는 객체: 메모리 주소를 가짐
- 대입 연산자의 좌측에 올 수 있음
- 지속적인 생명주기: 명시적으로 소멸시키기 전까지 존재
- 예) 변수, 포인터 역참조, 배열 요소
*/

/*
rvalue (Right Value - 우측값)
- 임시 객체: 표현식의 결과값
- 대입 연산자의 우측에만 올 수 있음
- 일시적인 생명주기: 표현식 평가 후 곧 소멸
- 예) 리터럴, 표현식 결과, 함수 반환 값 (값 반환), 강제 변환
*/