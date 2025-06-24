#include <iostream>
#include <vector>
#include <climits>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{};
        std::cin >> n;

        std::vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> v[i];
        }

        int diff = INT_MAX;
        for (int i = 1; i < n; ++i) {
            if (v[i] - v[i - 1] < diff) {
                diff = v[i] - v[i - 1];
            }
        }

        if (diff < 0) {
            std::cout << 0 << '\n';
        } else {
            std::cout << (diff / 2) + 1 << '\n'; 
        }
    }

    return 0;
}
