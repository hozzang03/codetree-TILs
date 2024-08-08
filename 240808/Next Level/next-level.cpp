#include <iostream>
#include <string>
using namespace std;

class My {
    public:
        string id;
        int level;

        My(string id = "codetree", int level = 10) {
            this -> id = id;
            this -> level = level;
        }

};

int main() {

    string c;
    int s;
    cin >> c >> s;

    My a = My("codetree", 10);
    My b = My(c,s);

    cout << "user " << a.id << " lv " << a.level << '\n';
    cout << "user " << b.id << " lv " << b.level;



    return 0;
}