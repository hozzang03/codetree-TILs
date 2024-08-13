#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    bool grid[201][201] = {false};

    for (int i = 0; i < N; ++i) {
        int x, y;
        cin >> x >> y;

        for (int dx = 0; dx < 8; ++dx) {
            for (int dy = 0; dy < 8; ++dy) {
                grid[x + dx + 100][y + dy + 100] = true;
            }
        }
    }

    int totalArea = 0;
    for (int i = 0; i < 201; ++i) {
        for (int j = 0; j < 201; ++j) {
            if (grid[i][j]) {
                ++totalArea;
            }
        }
    }

    cout << totalArea << endl;

    return 0;
}