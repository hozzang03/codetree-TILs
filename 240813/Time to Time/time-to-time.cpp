#include <iostream>

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    // 시작 시간과 끝 시간의 분 단위로의 변환
    int startMinutes = a * 60 + b;
    int endMinutes = c * 60 + d;

    // 경과 시간 계산
    int duration = endMinutes - startMinutes;

    // 결과 출력
    std::cout << duration << std::endl;

    return 0;
}