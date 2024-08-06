#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int arr[100];
    int cnt = 0;

    arr[1] = 1;
    arr[2] = n;

    for(int i = 3; i < 100; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }

    for(int i = 1; i < 100; i++) {
        if(cnt >= 1){
            break;
        }
        cout << arr[i] << ' ';

        if(arr[i] > 100) {
            cnt++;
        }
    }

    return 0;
}