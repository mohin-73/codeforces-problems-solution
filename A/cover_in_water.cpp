#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{};
        std::cin >> n;

        std::string str{};
        std::cin >> str;

        int ans{}, cnt{};

        for (int i = 0; i < n; ++i) {
            if (str[i] == '.') {
                ++cnt;
                if (cnt == 3) {
                    ans = 2;
                    break;
                }
            } else {
                ans += cnt;
                cnt = 0;
            }
            if (i == n - 1 && str[i] == '.') {
                ans += cnt;
            }
        }

        std::cout << ans << '\n';
    }

    return 0;
}
