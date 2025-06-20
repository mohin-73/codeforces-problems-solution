#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int a{}, b{}, c{};
        std::cin >> a >> b >> c;

        if (a + b == c) {
            std::cout << "+\n";
        } else {
            std::cout << "-\n";
        }
    }

    return 0;
}
