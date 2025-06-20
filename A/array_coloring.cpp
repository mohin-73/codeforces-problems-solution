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

        if (sum % 2 == 0) {
            std::cout << "YES\n";
        }  else {
            std::cout << "NO\n";
        }
    }

    return 0;
}
