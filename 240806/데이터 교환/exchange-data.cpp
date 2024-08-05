#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    a=5;
    b=6;
    c=7;

    int tmp1,tmp2;

    tmp1 = a;

    a = c;
    c = b;
    b = tmp1;

    cout<<a<<'\n'<<b<<'\n'<<c;

    return 0;
}