#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, x{}, sum{};
        std::cin >> n;

        for (int i = 0; i < n; ++i) {
            std::cin >> x;
            sum += x;
        }

        if (n == sum) {
            std::cout << 0 << '\n';
        } else if (sum < 0 || n > sum) {
            std::cout << 1 << '\n';
        } else {
            std::cout << sum - n << '\n';
        }
    }

    return 0;
}
