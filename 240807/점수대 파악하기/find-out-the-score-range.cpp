#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int carr[11] = {0, };

    for(int i= 0; i < 100; i ++){
        cin >> arr[i];
        if(arr[i] == 0 ){
            break;
        }
    }

    for(int i= 0; i < 100; i ++){
        if(arr[i] == 0 ){
            break;
        }
        carr[(int)(arr[i]/10)]++;
    }
    
    for(int i = 10; i > 0 ; i --){
        cout << i*10 << " - " << carr[i]<<'\n';
    }


    return 0;
}