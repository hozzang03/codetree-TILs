#include <iostream>
#include <string>

int main() {
    std::string binary;
    std::cin >> binary;

    // 이진수를 십진수로 변환
    int decimal = 0;
    int base = 1;

    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }

    // 십진수로 변환한 값을 17배
    decimal *= 17;

    // 17배한 값을 다시 이진수로 변환
    std::string result = "";

    if (decimal == 0) {
        result = "0";
    } else {
        while (decimal > 0) {
            result = std::to_string(decimal % 2) + result;
            decimal /= 2;
        }
    }

    // 결과 출력
    std::cout << result << std::endl;

    return 0;
}