#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, x{};
        std::cin >> n;

        std::vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> v[i];
            if (v[i] % 2) ++x;
        }

        if (x == 0 || x == n) {
            std::cout << "YES\n";
            continue;
        }

        for (int i = 0; i < n - 1; ++i) {
            if (v[i] % 2 == v[i + 1] % 2) {
                std::cout << "NO\n";
                goto next;
            }
        }

        std::cout << "YES\n";
        next:;
    }

    return 0;
}
