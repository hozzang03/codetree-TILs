#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[100];
    int cnt = 0;

    cin >> n;

    for(int i = 1; i < 100; i++){
        cout << n * i << ' ';
        if((n*i) % 5 == 0){
            cnt++;
        }
        if(cnt == 2){
            break;
        }
    }
    
    return 0;
}