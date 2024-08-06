#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int grid[9][9] = {0}; 

    for (int i = 1; i <= m; i++) {
        int r, c;
        cin >> r >> c;
        grid[r - 1][c - 1] = i; 
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j];
            if (j < n - 1) cout << " ";
        }
        cout << '\n';
    }

    return 0;
}