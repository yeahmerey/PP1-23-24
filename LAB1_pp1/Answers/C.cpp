#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int mask = 1;
    int reversed = 0;

    for (int i = 0; i < 4; ++i) {
        int bit = (N & mask) >> i;
        reversed = (reversed << 1) | bit;
        mask <<= 1;
    }

    std::cout << reversed << std::endl;

    return 0;
}