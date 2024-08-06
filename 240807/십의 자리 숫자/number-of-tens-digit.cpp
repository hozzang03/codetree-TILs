#include <iostream>
using namespace std;

int main() {
    
    int arr[101];
    int carr[10] = {0, };

    for(int i = 0; i < 100; i++){
        cin >> arr[i];
        if(arr[i] == 0){
            break;
        }
    }

    for(int i = 0; i < 100; i++){
        if(arr[i] == 0){
            break;
        }
        carr[(int)(arr[i]/10)]++;
//        int a = (int)(arr[i]/10);
//        carr[a] ++; 
    }

    for(int i = 1; i < 10; i++) {
        cout << i << ' ' << '-' << ' ' << carr[i] << '\n';
    }

    return 0;
}