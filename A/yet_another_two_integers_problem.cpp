#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int a{}, b{};
        std::cin >> a >> b;

        a = abs(a - b);
        std::cout << (a + 9) / 10 << '\n';
    }

    return 0;
}
