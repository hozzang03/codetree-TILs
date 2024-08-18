#include <iostream>
#include <string>

using namespace std;

int main() {
    string commands;
    cin >> commands;

    int x = 0, y = 0, dir = 0, time = 0;


    int dx[4] = {0, 1, 0, -1};  // x 변화량
    int dy[4] = {1, 0, -1, 0};  // y 변화량


    bool visited[2001][2001] = {false};  

    visited[1000][1000] = true;  

    for (char command : commands) {
        time++;

        if (command == 'L') {
            dir = (dir + 3) % 4; 
        } else if (command == 'R') {
            dir = (dir + 1) % 4; 
        } else if (command == 'F') {
            x += dx[dir];
            y += dy[dir];
        }

        int idxX = x + 1000;
        int idxY = y + 1000;

        if (visited[idxX][idxY]) {
            cout << time << endl;
            return 0;
        } else {
            visited[idxX][idxY] = true;
        }
    }

    cout << -1 << endl;
    return 0;
}