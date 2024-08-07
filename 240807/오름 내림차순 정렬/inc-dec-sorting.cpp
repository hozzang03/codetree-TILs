#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100] = {}; // 최대 100개의 정수를 저장할 배열 선언

    // 입력받은 n개의 정수를 배열에 저장
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 배열의 앞부분 n개 요소만 정렬
    sort(arr, arr + n);

     for (int i = 0; i < n ; i++) {
        cout << arr[i] << ' ';
    }

    cout  << '\n';
    // 내림차순으로 출력 (n-1부터 0까지)
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << ' ';
    }

    return 0;
}