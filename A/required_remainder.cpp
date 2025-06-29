#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int x{}, y{}, n{};
        std::cin >> x >> y >> n;

        int k = ((n / x) * x) + y;

        if (k > n) k = k - x;

        std::cout << k << '\n';
    }

    return 0;
}
