#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int x = 0, y = 0, time = 0;
    bool returned = false;

    for (int i = 0; i < N; ++i) {
        char direction;
        int distance;
        cin >> direction >> distance;

        for (int j = 0; j < distance; ++j) {
            // 방향에 따라 x, y 좌표를 업데이트
            if (direction == 'N') y++;
            else if (direction == 'S') y--;
            else if (direction == 'E') x++;
            else if (direction == 'W') x--;

            time++;

            // 처음으로 (0, 0) 위치로 돌아왔는지 확인
            if (x == 0 && y == 0) {
                returned = true;
                cout << time << endl;
                break;
            }
        }

        if (returned) break;
    }

    if (!returned) {
        cout << -1 << endl;
    }

    return 0;
}