#include <iostream>
#include <string>

using namespace std;

class My {
public:
    string name;
    int code;

    // 생성자를 public으로 선언 및 기본값으로 초기화
    My(string name = "codetree", int code = 50) {
        this->name = name;
        this->code = code;
    }
};

int main() {
    string name;
    int code;

    // 기본 생성자 사용하여 객체 초기화
    My a;

    // 기본 생성자 초기화된 객체 정보 출력
    cout << "product " << a.code << " is " << a.name << '\n';

    // 사용자 입력 받기
    cin >> name >> code;
    
    // 사용자 입력값으로 객체 초기화
    a = My(name, code);

    // 업데이트된 객체 정보 출력
    cout << "product " << a.code << " is " << a.name << '\n';

    return 0;
}