#include <iostream>
#include <algorithm>

int main() {
    int N, K;
    std::cin >> N >> K;

    int blocks[101] = {0};  // 블럭을 쌓을 N개의 칸을 0으로 초기화 (최대 N=100)

    for (int i = 0; i < K; i++) {
        int A, B;
        std::cin >> A >> B;
        for (int j = A; j <= B; j++) {
            blocks[j]++;
        }
    }

    // 각 칸의 블럭 수 중 최댓값 찾기
    int maxBlocks = 0;
    for (int i = 1; i <= N; i++) {
        if (blocks[i] > maxBlocks) {
            maxBlocks = blocks[i];
        }
    }

    std::cout << maxBlocks << std::endl;

    return 0;
}