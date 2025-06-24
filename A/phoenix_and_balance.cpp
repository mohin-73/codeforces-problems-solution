#include <iostream>
#include <cmath>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{};
        std::cin >> n;

        long long ans{};
        for (int i = 1; i <= n / 2; ++i) {
            ans += std::pow(2, i);
        }

        std::cout << ans << '\n';
    }

    return 0;
}
