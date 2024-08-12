#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n == 0) {
        std::cout << "0" << std::endl;
        return 0;
    }

    std::string binary = "";

    while (n > 0) {
        binary = std::to_string(n % 2) + binary;
        n /= 2;
    }

    std::cout << binary << std::endl;

    return 0;
}