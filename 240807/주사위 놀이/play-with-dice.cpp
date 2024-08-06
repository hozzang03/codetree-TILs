#include <iostream>
using namespace std;

int main() {
    
    int arr[10];
    int carr[7] = {0, };

    for(int i = 0; i < 10; i ++){
        cin >> arr[i];
    } 

    for(int i = 0; i < 10; i ++){
        carr[arr[i]]++;
    }

    for(int i = 1; i < 7; i ++){
        cout << i << ' ' <<'-' << ' '<< carr[i] << '\n' ;
    } 

    return 0;
}