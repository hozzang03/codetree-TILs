#include <iostream>
#include <string>

using namespace std;

class hello {
public: 
    string code;
    char meet;
    int time;

    hello(string code, char meet, int time){
        this->code = code;
        this -> meet = meet;
        this -> time = time;

        cout << "secret code : "<<code<<'\n';
        cout << "meeting point : "<<meet<<'\n';
        cout << "time : "<<time<<'\n';    
    }

};

int main() {
    string code;
    char meet;
    int time;

    cin >> code >> meet >> time;
    hello a = hello(code, meet, time);

    return 0;
}