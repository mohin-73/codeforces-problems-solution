#include <iostream>
#include <map>
#include <vector>

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

        std::map<int, bool> mp;
        int cnt{};

        for (int i = n - 1; i >= 0; --i) {
            if (mp[v[i]]) {
                break;
            }
            mp[v[i]] = true;
            ++cnt;
        }

        std::cout << n - cnt << '\n';
    }

    return 0;
}
