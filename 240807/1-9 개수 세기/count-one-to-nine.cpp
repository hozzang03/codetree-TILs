#include <iostream>
using namespace std;

int main() {
    
    int n;

    int arr[100];
    int carr[10] = { 0, } ;

    cin >> n;
    // 숫자삽입
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 개수
     for(int i = 0; i < n; i++) {
        carr[arr[i]]++;  // arr[i]는 숫자, carr[i]는 그 숫자의 개수 카운트.
    } 

    //출력
     for(int i = 1; i < 10; i++) {
        cout << carr[i] << '\n';
    } 

    return 0;
}