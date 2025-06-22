#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{};
    std::cin >> n;

    int curr = 1, ans{};

    while (n >= curr) {
        ++ans;
        n = n - curr;
        curr = (ans + 1) * (ans + 2) / 2;
    }

    std::cout << ans << '\n';

    return 0;
}
