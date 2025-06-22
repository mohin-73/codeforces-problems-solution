#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int cost[4] = {};
    for (int i = 0; i < 4; ++i) {
        std::cin >> cost[i];
    }

    std::string str{};
    std::cin >> str;

    int ans{};

    for (int i = 0; i < str.length(); ++i) {
        int k = str[i] - 49;
        ans += cost[k];
    }

    std::cout << ans << '\n';

    return 0;
}
