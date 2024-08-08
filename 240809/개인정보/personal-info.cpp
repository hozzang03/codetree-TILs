#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// 학생 정보를 담는 구조체
struct Student {
    string name;
    int height;
    float weight;
};

// 이름순으로 정렬하기 위한 비교 함수
bool compareByName(const Student& a, const Student& b) {
    return a.name < b.name;
}

// 키순으로 정렬하기 위한 비교 함수
bool compareByHeight(const Student& a, const Student& b) {
    return a.height > b.height; // 키가 큰 순서
}

// 메인 함수
int main() {
    Student students[5];
    
    // 입력 받기
    for(int i = 0; i < 5; i++) {
        cin >> students[i].name >> students[i].height >> students[i].weight;
    }

    // 이름순으로 정렬
    sort(students, students + 5, compareByName);
    
    cout << "name" << endl;
    for(int i = 0; i < 5; i++) {
        // 몸무게를 소수점 이하 한 자리까지 출력
        int weightInt = static_cast<int>(students[i].weight * 10 + 0.5);
        float weightRounded = weightInt / 10.0;
        cout << students[i].name << " " << students[i].height << " " << weightRounded << endl;
    }
    cout << '\n';

    // 키순으로 정렬
    sort(students, students + 5, compareByHeight);
    
    cout << "height" << endl;
    for(int i = 0; i < 5; i++) {
        // 몸무게를 소수점 이하 한 자리까지 출력
        int weightInt = static_cast<int>(students[i].weight * 10 + 0.5);
        float weightRounded = weightInt / 10.0;
        cout << students[i].name << " " << students[i].height << " " << weightRounded << endl;
    }

    return 0;
}