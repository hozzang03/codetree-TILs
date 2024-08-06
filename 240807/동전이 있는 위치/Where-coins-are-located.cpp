#include <iostream>
using namespace std;

int main() {

    int n, m;
    int arr[10][10];

    cin >> n >> m;
    
    for(int i = 0; i < m; i++){
        int r, c;
        cin >> r >> c;
        arr[r-1][c-1] = 1;
    }

    for(int i = 0 ; i < n; i ++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == 1) cout << "1" << ' ';
            else cout << "0" << ' ';
        }
        cout <<'\n';
    }


    return 0;
}