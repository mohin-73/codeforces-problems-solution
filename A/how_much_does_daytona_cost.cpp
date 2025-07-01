#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, x{}, k{};
        std::cin >> n >> k;

        bool flag = false;

        for (int i = 0; i < n; ++i) {
            std::cin >> x;
            if (x == k) flag = true;
        }

        if (flag) std::cout << "YES\n";
        else std::cout << "NO\n";
    }

    return 0;
}
