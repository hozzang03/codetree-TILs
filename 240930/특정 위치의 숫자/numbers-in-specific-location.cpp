#include <iostream>
using namespace std;

int main() {
    int arr[11];
    int a = 0;

    for (int i =0; i <10 ; i++){ 
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++ ){ 
        if(i == 2 || i == 4 || i == 9){
            a += arr[i];
        }
    }
    
    cout << a;
    return 0;
}