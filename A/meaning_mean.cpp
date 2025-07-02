#include <iostream>
#include <vector>
#include <algorithm>

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
        }
        std::sort(v.begin(), v.end());

        for (int i = 1; i < n; ++i) {
            v[i] = (v[i] + v[i - 1]) / 2;
        }

        std::cout << v[n - 1] << '\n';
    }

    return 0;
}
