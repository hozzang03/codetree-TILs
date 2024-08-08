#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Person {
public:
    string name;
    int height;
    int weight;

    // 기본 생성자
    Person() : name(""), height(0), weight(0) {}

    // 매개변수가 있는 생성자
    Person(string n, int h, int w) : name(n), height(h), weight(w) {}
};

// 키를 기준으로 오름차순 정렬을 위한 비교 함수
bool compareByHeight(const Person& a, const Person& b) {
    return a.height < b.height;
}

int main() {
    int n;
    cin >> n;

    Person people[10];

    // 입력 받기
    for(int i = 0; i < n; i++) {
        string name;
        int height, weight;

        cin >> name >> height >> weight;

        people[i] = Person(name, height, weight);
    }

    // 키를 기준으로 오름차순 정렬
    sort(people, people + n, compareByHeight);

    // 정렬된 결과 출력
    for(int i = 0; i < n; i++) {
        cout << people[i].name << ' ' << people[i].height << ' ' << people[i].weight << '\n';
    }

    return 0;
}