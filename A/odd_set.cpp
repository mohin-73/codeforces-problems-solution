#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, odd{}, even{}, num{};
        std::cin >> n;

        for (int i = 0; i < 2 * n; ++i) {
            std::cin >> num;
            if (num % 2) {
                ++odd;
            } else {
                ++even;
            }
        }

        if (odd == even) {
            std::cout << "Yes\n";
        } else {
            std::cout << "No\n";
        }
    }

    return 0;
}
