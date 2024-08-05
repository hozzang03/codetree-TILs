#include <iostream>
using namespace std;

int main() {
    
    cout << fixed;

    double a = 13;
    double m = 0.165;

    cout.precision(0);
    cout << a;

    cout.precision(6);
    cout << " * " << m << " = " << a*m;

    return 0;
}