#include <iostream>

using namespace std;

namespace Test {
    int n_data = 100;

    namespace Dev {
        int n_data = 200;

        namespace Win {
            int n_data = 300;
        }
    }
}

// C++17부터 지원되는 중첩 네임스페이스 선언 문법이므로, 
// C++14 환경에서는 namespace A::B::C 형태로 
// 선언하면 컴파일 오류가 발생함.
namespace Test_2::WinDev {
    int n_data = 400;
}

int main() {
    cout << Test::n_data << endl;
    cout << Test::Dev::n_data << endl;
    cout << Test::Dev::Win::n_data << endl;
    cout << Test_2::WinDev::n_data << endl;

    return 0;
}