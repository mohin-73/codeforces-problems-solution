#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, x{};
        std::cin >> n >> x;

        std::vector<int> v(n + 1);
        for (int i = 0; i < n; ++i) {
            std::cin >> v[i];
        }

        int ans = v[0];
        bool flag = true;
        
        for (int i = 1; i < n; ++i) {
            if (v[i] > x) {
                int k = v[i] - v[i - 1];
                k += k;
                ans = std::max(k, ans);
                flag = false;
                break;
            }
            ans = std::max(v[i] - v[i - 1], ans);
        }

        if (flag) {
            int k = x - v[n - 1];
            k += k;
             ans = std::max(k, ans);
        }

        std::cout << ans << '\n';
    }

    return 0;
}
