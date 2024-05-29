#include <iostream>

bool isPowerOfTwo(long long n) {
    // Базовый случай: если n стало равным 1, то это степень двойки
    if (n == 1) {
        return true;
    }

    // Если n стало меньше 1 или нечетным, то это не степень двойки
    if (n < 1 || n % 2 != 0) {
        return false;
    }

    // Рекурсивный случай: делим n на 2
    return isPowerOfTwo(n / 2);
}

int main() {

    long long n;
    std::cin >> n;

    if (n < 1) {
        std::cout << "No" << std::endl;
    } else if (isPowerOfTwo(n)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}