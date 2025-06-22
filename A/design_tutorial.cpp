#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{};
    std::cin >> n;

    if (n % 2 == 0) {
        std::cout << 4 << " " << n - 4 << '\n';
    } else {
        std::cout << 9 << " " << n - 9 << '\n';
    }

    return 0;
}
