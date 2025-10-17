#include <iostream>
#include <cmath>

int main() {
    int row, col;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int x;
            std::cin >> x;
            if (x == 1) {
                row = i;
                col = j;
            }
        }
    }

    int dis = std::abs(row - 3) + std::abs(col - 3);
    std::cout << dis << '\n';

    return 0;
}
