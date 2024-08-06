#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[100][100];

    int num = 0; 

    for (int col = 0; col < m; col++) {
        if (col % 2 == 0) {
            for (int row = 0; row < n; row++) {
                arr[row][col] = num++;
            }
        } else {
            for (int row = n - 1; row >= 0; row--) {
                arr[row][col] = num++;
            }
        }
    }

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            cout << arr[row][col];
            if (col < m - 1) cout << " ";
        }
        cout << '\n';
    }

    return 0;
}