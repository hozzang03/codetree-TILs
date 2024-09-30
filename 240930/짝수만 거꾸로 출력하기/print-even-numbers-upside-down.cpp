#include <iostream>
using namespace std;

int main() {
    
    int arr[101];
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[n];
    }

    for(int i = n - 1; i >= 0; i--) {
        if(arr[n]%2 == 0) {
            cout << arr[n] << ' ';
        }
    }

    return 0;
}