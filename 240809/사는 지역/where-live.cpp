#include <iostream>
#include <string>

using namespace std;

class My {
public:
    string name;
    string code;
    string city;

    // 생성자를 public으로 선언 및 기본값으로 초기화
    My(string name ="", string code="", string city="" ) {
        this-> name = name;
        this-> code = code;
        this -> city = city;
    }
};

int main() {
    string name;
    string code;
    string city;

    int n;
    cin >> n;

    My arr[10];

    for(int i = 0; i < n; i ++) {
        string name;
        string code;
        string city;

        cin >> name >> code >> city;

        arr[i] = My(name, code, city);
    }

    My what = arr[0];

    for(int i = 1; i < n; i ++) {
        if(what.name < arr[i].name) {
            what = arr[i];
        }
    }


    cout << "name " << what.name << "\n" << "addr " << what.code << '\n' << "city " << what.city;
    

    return 0;
}