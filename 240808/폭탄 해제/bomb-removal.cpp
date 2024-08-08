#include <iostream>
#include <string>
using namespace std;

class My {
public: 
    string code;
    char color;
    int sec;

    My(string code, char color, int sec) {
        this -> code = code;
        this -> color = color;
        this -> sec = sec;
    }
};

int main() {

    string code;
    char color;
    int sec;

    cin >> code >> color >> sec;

    My a(code, color, sec);

    cout << "code : " << a.code << '\n' 
         << "color : " << a.color << '\n' 
         << "second : " << a.sec << '\n' ;


    return 0;
}