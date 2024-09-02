#include <iostream>
using namespace std;

int main() {

    int arr[10];
    int cnt = 0;

    for(int i = 0; i <10; i++) {
        cin >> arr[i];
        if(arr[i] == 0){
            break;
        }
        cnt++;
    }

    for(int i = cnt; i > 0; i--) {
        cout << arr[i-1] <<' ';
    }

    return 0;

}