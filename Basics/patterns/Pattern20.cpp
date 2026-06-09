#include <iostream>

int main() {

    // Upper half
    for (int q = 1; q <= 5; q++) {

        for (int a = 1; a <= q; a++) {
            std::cout << "* ";
        }

        for (int b = 1; b <= 2 * (5 - q); b++) {
            std::cout << "  ";
        }

        for (int c = 1; c <= q; c++) {
            std::cout << "* ";
        }

        std::cout << "\n";
    }

    // Lower half
    for (int r = 4; r >= 1; r--) {

        for (int s = 1; s <= r; s++) {
            std::cout << "* ";
        }

        for (int t = 1; t <= 2 * (5 - r); t++) {
            std::cout << "  ";
        }

        for (int u = 1; u <= r; u++) {
            std::cout << "* ";
        }

        std::cout << "\n";
    }

    return 0;
}

