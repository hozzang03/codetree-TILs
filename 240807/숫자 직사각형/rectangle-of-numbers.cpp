#include <iostream>
using namespace std;

int main() {

    int arr[100][100] = {};
    int n,m;
    int cnt = 1;

    cin >> n >> m;

    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < m; j++) {
            arr[i][j] = cnt;
            cnt++;
        }
    }

    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << "\n";
    }



    return 0;
}