#include <iostream>
using namespace std;

int main() {
    
    cout << fixed;

    int arr[10];
    int sum = 0;
    double avg = 0;
    int count=0;
    
    for(int i =0; i <10;i++){
        cin >> arr[i];
    }

    for(int i = 0; i < 10;i++){
       if(arr[i]>=250){
        break;
       }
        sum += arr[i];
        count++;
    }

    avg = (double)(sum) / (double)(count);

    cout << sum << ' ';
    
    cout.precision(1);
    cout << avg;

    return 0;
}