#include <iostream>
#include <string>
#include <algorithm> // for std::sort

using namespace std;

// 학생 정보를 담는 구조체
struct Student {
    string name;
    int height;
    int weight;
};

// 키를 기준으로 오름차순, 키가 동일하면 몸무게가 큰 순서로 정렬하는 비교 함수
bool compare(const Student& a, const Student& b) {
    if (a.height == b.height) {
        return a.weight > b.weight; // 키가 동일하면 몸무게가 큰 사람이 먼저
    }
    return a.height < b.height; // 키를 기준으로 오름차순 정렬
}

// 메인 함수
int main() {
    int n;
    cin >> n;

    Student students[n]; // 학생 정보를 담을 배열

    // 학생 정보 입력 받기
    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].height >> students[i].weight;
    }

    // 정렬
    sort(students, students + n, compare);

    // 결과 출력
    for (int i = 0; i < n; i++) {
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << endl;
    }

    return 0;
}