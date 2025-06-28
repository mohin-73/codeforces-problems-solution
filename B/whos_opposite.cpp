#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int a{}, b{}, c{};
        std::cin >> a >> b >> c;

        int x = std::max(a, b);
        int y = std::min(a, b);

        if (y * 2 > x) {
            std::cout << -1 << '\n';
        } else {
            int m = x - (y - 1);
            int k = m + m - 2;
            if (c > k) {
                std::cout << -1 << '\n';
            } else {
                if (c >= m) {
                    std::cout << c - m + 1 << '\n';
                } else {
                    std::cout << m + c - 1 << '\n';
                }
            }
        }
    }

    return 0;
}
