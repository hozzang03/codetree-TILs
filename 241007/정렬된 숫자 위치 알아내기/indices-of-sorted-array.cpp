#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> arr(N);
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        arr[i] = {num, i};  // (원소값, 원래 인덱스)
    }

    vector<int> result(N);
    sort(arr.begin(), arr.end());  // 값 기준으로 정렬

    for (int i = 0; i < N; i++) {
        result[arr[i].second] = i + 1;  // 원래 인덱스에 정렬 후 위치 저장
    }

    for (int i = 0; i < N; i++) {
        cout << result[i] << " ";
    }
    
    cout << endl;
    return 0;
}