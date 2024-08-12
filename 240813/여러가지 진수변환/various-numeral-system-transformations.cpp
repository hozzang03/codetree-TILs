#include <iostream>

int main() {
    int N, B;
    std::cin >> N >> B;

    std::string result = "";

    while (N > 0) {
        int remainder = N % B;
        result = std::to_string(remainder) + result;
        N /= B;
    }

    std::cout << result << std::endl;

    return 0;
}