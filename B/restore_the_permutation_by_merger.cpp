#include <iostream>
#include <vector>
#include <map>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, x{};
        std::cin >> n;

        std::vector<int> v;
        std::map<int, bool> m;

        for (int i = 0; i < n + n; ++i) {
            std::cin >> x;
            if (!m[x]) {
                v.push_back(x);
                m[x] = true;
            }
        }

        for (int i = 0; i < n - 1; ++i) {
            std::cout << v[i] << " ";
        }
        std::cout << v[n - 1] << '\n';
    }

    return 0;
}
