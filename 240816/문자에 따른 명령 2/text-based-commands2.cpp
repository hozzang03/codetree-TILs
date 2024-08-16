#include <iostream>
#include <string>

using namespace std;

int main() {
    string commands;
    cin >> commands;

    // 초기 좌표 (x, y)와 방향 (북: 0, 동: 1, 남: 2, 서: 3)
    int x = 0, y = 0, dir = 0;
    
    // dx, dy 배열로 방향에 따른 움직임 정의
    int dx[4] = {0, 1, 0, -1};  // 북, 동, 남, 서 방향의 x 변화량
    int dy[4] = {1, 0, -1, 0};  // 북, 동, 남, 서 방향의 y 변화량

    for (char command : commands) {
        if (command == 'L') {
            dir = (dir + 3) % 4;  // 왼쪽 회전
        } else if (command == 'R') {
            dir = (dir + 1) % 4;  // 오른쪽 회전
        } else if (command == 'F') {
            x += dx[dir];  // 현재 방향으로 이동
            y += dy[dir];
        }
    }

    cout << x << " " << y << endl;
    return 0;
}