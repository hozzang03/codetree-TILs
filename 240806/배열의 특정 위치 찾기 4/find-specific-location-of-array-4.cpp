#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[10];
    int count = 0;
    int d = 0;
    int sum = 0;

    for(int i = 0; i < 10; i++){
        cin >> arr[i];
        if(arr[i]==0){
            break;
        }
        count ++;
    }

    for(int i = 0; i < count; i++){
        if(arr[i] % 2 == 0){
            d++;
            sum += arr[i];
        }
    }

    cout << d << ' ' << sum;

    return 0;
}