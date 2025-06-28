#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, sum{};
        std::cin >> n;

        std::vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> v[i];
            sum += v[i];
        }

        int p = sum / n, k{};

        for (int i = 0; i < n; ++i) {
            if (v[i] >= p) {
                k = k + v[i] - p;
            } else if (v[i] < p && k >= p - v[i]) {
                k = k - (p - v[i]);
            } else {
                std::cout << "NO\n";
                goto next;
            }
        }

        std::cout << "YES\n";
        next:;
    }

    return 0;
}
