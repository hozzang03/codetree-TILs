#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[10];
    int count = 0;
    int sum = 0;

    for(int i = 0; i < 10 ; i++) {
        cin >> arr[i];
        if(arr[i] == 0) {
            break;
        }
        count++;
    }

    for(int i = count - 1; i >= 0 ; i--) {
        sum += arr[i];
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << (double)sum / (double)count;


    return 0;
}