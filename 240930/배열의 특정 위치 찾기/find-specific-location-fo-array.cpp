#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    double avg = 0;
    int arr[10];
    int cnt = 0;

    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // 짝수 번째로 입력된 값의 합 (1, 3, 5, 7, 9번째 인덱스)
    for(int i = 1; i < 10; i += 2) {
        sum += arr[i];
    }

    // 3의 배수 번째로 입력된 값의 평균 (2, 5, 8번째 인덱스)
    for(int i = 2; i < 10; i += 3) {
        avg += arr[i];
        cnt++;
    }

    avg = cnt > 0 ? avg / cnt : 0;  // cnt가 0일 경우 대비
    cout << sum << ' ';
    cout.precision(1);
    cout << fixed << avg << endl;

    return 0;
}