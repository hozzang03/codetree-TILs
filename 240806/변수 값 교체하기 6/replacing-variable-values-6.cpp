#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a = 2;
    int b = 5;

    int tmp;

    tmp = a;
    a = b;
    b = tmp;

    cout<< a<<'\n'<<b;

    return 0;
}