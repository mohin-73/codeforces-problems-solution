#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, k{};
        std::cin >> n >> k;

        std::string str{};
        std::cin >> str;

        int cnt{};

        for (int i = 0; i < n; ++i) {
            if (str[i] == 'B') {
                ++cnt;
                i += k - 1;
            }
        }

        std::cout << cnt << '\n';
    }
    
    return 0;
}
