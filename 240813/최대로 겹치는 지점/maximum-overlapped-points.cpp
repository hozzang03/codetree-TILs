#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int overlap[101] = {0};  // 1~100까지 각 지점에서의 겹침 수를 기록

    for (int i = 0; i < n; i++) {
        int x1, x2;
        std::cin >> x1 >> x2;
        for (int j = x1; j <= x2; j++) {
            overlap[j]++;
        }
    }

    int maxOverlap = 0;
    for (int i = 1; i <= 100; i++) {
        if (overlap[i] > maxOverlap) {
            maxOverlap = overlap[i];
        }
    }

    std::cout << maxOverlap << std::endl;

    return 0;
}