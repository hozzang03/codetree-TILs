#include <iostream>
using namespace std;

// 학생 정보를 담는 구조체
struct Student {
    int height;
    int weight;
    int number; // 학생의 번호
};

// 학생 정보를 정렬하기 위한 비교 함수
bool compare(const Student& a, const Student& b) {
    if (a.height != b.height) {
        return a.height > b.height; // 키가 큰 순서
    }
    if (a.weight != b.weight) {
        return a.weight > b.weight; // 몸무게가 큰 순서
    }
    return a.number < b.number; // 번호가 작은 순서
}

int main() {
    int n;
    cin >> n;

    Student students[1000]; // 최대 1000명의 학생 정보를 담기 위한 배열

    // 학생 정보 입력 받기
    for (int i = 0; i < n; ++i) {
        cin >> students[i].height >> students[i].weight;
        students[i].number = i + 1; // 번호는 1부터 시작
    }

    // 버블 정렬을 이용한 학생 정보 정렬
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (compare(students[j + 1], students[j])) {
                swap(students[j], students[j + 1]);
            }
        }
    }

    // 정렬된 결과 출력
    for (int i = 0; i < n; ++i) {
        cout << students[i].height << ' '
             << students[i].weight << ' '
             << students[i].number << '\n';
    }

    return 0;
}