#include <iostream>
using namespace std;

int main() {

    int n, m;
    int arr[10][10];

    cin >> n >> m;
    
    for(int i = 0; i < m; i++){
        int r, c;
        cin >> r >> c;
        arr[r-1][c-1] = 1;  // -1 해야함 >> 입력된 좌표는 1부터 시작하는 값으로 입력되므로,
        // 배열 인덱스로 사용할 때는 r - 1과 c - 1로 변환해야 함

    for(int i = 0 ; i < n; i ++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == 1) cout << "1" << ' ';
            else cout << "0" << ' ';
        }
        cout <<'\n';
    }


    return 0;
}