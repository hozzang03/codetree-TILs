#include <iostream>
#include <string>

int main() {
    std::string binary;
    std::cin >> binary;

    int decimal = 0;
    int base = 1; // 2^0부터 시작

    // 이진수 문자열의 마지막 자리부터 앞으로 이동하면서 변환
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2; // 다음 자리수는 2의 제곱수로 증가
    }

    std::cout << decimal << std::endl;

    return 0;
}