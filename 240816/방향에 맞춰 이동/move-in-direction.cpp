#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int x = 0, y = 0;

    int dx[4] = {0, 0, 1, -1}; // N, S, E, W에 대응
    int dy[4] = {1, -1, 0, 0}; // N, S, E, W에 대응

    for (int i = 0; i < N; ++i) {
        char direction;
        int distance;
        cin >> direction >> distance;

        int dirIndex;
        if (direction == 'N') dirIndex = 0;
        else if (direction == 'S') dirIndex = 1;
        else if (direction == 'E') dirIndex = 2;
        else if (direction == 'W') dirIndex = 3;

        x += dx[dirIndex] * distance;
        y += dy[dirIndex] * distance;
    }

    cout << x << " " << y << endl;

    return 0;
}