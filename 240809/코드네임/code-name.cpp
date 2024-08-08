#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string name;
    int score;

    // 생성자를 public으로 선언
    Person(string name = "", int score = 0) {
        this->name = name;
        this->score = score;
    }
};

int main() {
    Person persons[5];

    // 5명의 요원 정보를 입력받음
    for(int i = 0; i < 5; i++) {
        string name;
        int score;

        cin >> name >> score;

        persons[i] = Person(name, score);
    }

    // 점수가 제일 낮은 요원을 찾기 위한 초기화
    Person minPerson = persons[0];

    for(int i = 1; i < 5; i++) {
        if(persons[i].score < minPerson.score) {
            minPerson = persons[i];
        }
    }

    // 점수가 제일 낮은 요원의 정보 출력
    cout << minPerson.name << ' ' << minPerson.score << '\n';

    return 0;
}