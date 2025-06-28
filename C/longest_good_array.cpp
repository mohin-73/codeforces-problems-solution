#include <iostream>
#include <cmath>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        long long l{}, r{};
        std::cin >> l >> r;

        r = r - l;
        long long x = (-1 + sqrt(1 + 8 * r)) / 2;

        std::cout << ++x << '\n';
    }

    return 0;
}
