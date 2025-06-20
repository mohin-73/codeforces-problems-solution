#include <iostream>
#include <vector>
#include <algorithm>

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
        std::sort(v.begin(), v.end());

        for (int i = 1; i < n; ++i) {
            if (v[i] - v[i - 1] > 1) {
                std::cout << "NO\n";
                goto next;
            }
        }
        
        std::cout << "YES\n";
        next:;
    }

    return 0;
}
