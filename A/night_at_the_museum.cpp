#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str{};
    std::cin >> str;

    int ans{}, curr = 1;

    for (char ch : str) {
        int k = int(ch) - 96;
        int t = abs(curr - k);
        ans = ans + std::min(t, 26 - t);
        curr = k;
    }

    std::cout << ans << '\n';

    return 0;
}
