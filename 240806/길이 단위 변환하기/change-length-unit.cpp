#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double a = 30.48;
    int b = 160934;

    double c = 9.2;
    double d = 1.3;

    cout<<fixed;
    cout.precision(1);
    cout << c<<"ft"<<" = "<<a*c <<"cm";
    cout<<"\n";
    cout << d<<"mi"<<" = "<<b*d <<"cm";



    return 0;
}