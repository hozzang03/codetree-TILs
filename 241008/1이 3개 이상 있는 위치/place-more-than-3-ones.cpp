#include <iostream>
#include <vector>

using namespace std;

// 상하좌우 방향 설정
int dxs[4] = {0, 1, 0, -1};
int dys[4] = {1, 0, -1, 0};

// 격자 범위 안에 있는지 체크하는 함수
bool in_range(int x, int y, int n) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

// 인접한 칸에 1이 3개 이상 있는지 체크하는 함수
int adjacent_cnt(int x, int y, const vector<vector<int>>& arr, int n) {
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        int nx = x + dxs[i];
        int ny = y + dys[i];
        if (in_range(nx, ny, n) && arr[nx][ny] == 1) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    
    // 2차원 배열로 입력받기
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int ans = 0;

    // 각 칸에 대해 인접한 1의 개수를 확인하고 3개 이상인 경우를 카운트
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (adjacent_cnt(i, j, arr, n) >= 3) {
                ans++;
            }
        }
    }

    // 결과 출력
    cout << ans << endl;

    return 0;
}