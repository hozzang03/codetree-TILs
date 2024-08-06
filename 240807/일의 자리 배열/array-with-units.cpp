#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[11];

    cin >> arr[1] >> arr[2];
    for(int i = 3; i <11; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    for(int i = 1; i <11; i++){
        cout << arr[i]%10 << ' ';
    }


    return 0;
}