#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    short t{};
    std::cin >> t;

    while (t--) {
        short n{};
        std::cin >> n;
        std::cout << (n % 10) + ((n / 10) % 10) << '\n';
    }
    
    return 0;
}
