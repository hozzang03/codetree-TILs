#include <iostream>
#include <string>
using namespace std;

// 학생 정보를 담는 구조체
struct Student {
    string name;
    int korean;
    int english;
    int math;

    // 기본 생성자
    Student(string name = "", int korean = 0, int english = 0, int math = 0)
        : name(name), korean(korean), english(english), math(math) {}
};

int main() {
    int n;
    cin >> n;

    // 학생 정보를 담을 배열 생성
    Student students[10];

    // 학생 정보 입력 받기
    for (int i = 0; i < n; ++i) {
        string name;
        int korean, english, math;
        cin >> name >> korean >> english >> math;
        students[i] = Student(name, korean, english, math);
    }

    // 국어, 영어, 수학 순서대로 정렬
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (students[i].korean < students[j].korean ||
                (students[i].korean == students[j].korean && students[i].english < students[j].english) ||
                (students[i].korean == students[j].korean && students[i].english == students[j].english && students[i].math < students[j].math)) {
                swap(students[i], students[j]);
            }
        }
    }

    // 결과 출력
    for (int i = 0; i < n; ++i) {
        cout << students[i].name << ' '
             << students[i].korean << ' '
             << students[i].english << ' '
             << students[i].math << '\n';
    }

    return 0;
}