#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{};
        std::cin >> n;

        int k = n % 10;
        int ans = (k - 1) * 10;
        
        int d{};
        while (n) {
            ++d;
            n /= 10;
        }

        ans = ans + ((d * (d + 1)) / 2);

        std::cout << ans << '\n';
    }

    return 0;
}
