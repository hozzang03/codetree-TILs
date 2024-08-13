#include <iostream>
#include <algorithm>

const int OFFSET = 100;  // 좌표를 0 이상으로 변환하기 위한 오프셋
const int SIZE = 201;    // 좌표 범위에 따른 배열 크기 (좌표 -100에서 100까지)

int main() {
    int N;
    std::cin >> N;

    bool grid[SIZE][SIZE] = {false};  // 직사각형이 차지하는 평면을 기록할 배열

    // 입력받은 각 직사각형에 대해 처리
    for (int i = 0; i < N; i++) {
        int x1, y1, x2, y2;
        std::cin >> x1 >> y1 >> x2 >> y2;

        // 좌표를 배열의 인덱스로 변환
        x1 += OFFSET;
        y1 += OFFSET;
        x2 += OFFSET;
        y2 += OFFSET;

        // 해당 범위의 셀을 true로 설정
        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) {
                grid[x][y] = true;
            }
        }
    }

    // 겹치는 부분을 제외한 총 넓이 계산
    int area = 0;
    for (int x = 0; x < SIZE; x++) {
        for (int y = 0; y < SIZE; y++) {
            if (grid[x][y]) {
                area++;
            }
        }
    }

    std::cout << area << std::endl;

    return 0;
}