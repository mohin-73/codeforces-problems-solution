#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        long long n{}, k{};
        std::cin >> n >> k;

        if (n % k == 0 || (n - k) % 2 == 0 || n % 2 == 0) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}
