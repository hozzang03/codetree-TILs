#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;
    int sum =0;

    for(int i = 0; i<100; i++){
        cin >> arr[i];
        if(arr[i] == 0){
            n = i;
            break;
        }
        
    }

    for(int i = n; i > n-4; i--){
        sum += arr[i];
    }

    cout<< sum;
    return 0;
}