#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{};
    std::cin >> n;

    int ans{};
    for (int i = 1; i <= (n / 2); ++i) {
        if ((n - i) % i == 0) {
            ++ans;
        }
    }

    std::cout << ans << '\n';

    return 0;
}
