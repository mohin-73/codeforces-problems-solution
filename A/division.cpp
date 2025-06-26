#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{};
        std::cin >> n;

        if (n < 1400) {
            std::cout << "Division 4\n";
        } else if (n < 1600) {
            std::cout << "Division 3\n";
        } else if (n < 1900) {
            std::cout << "Division 2\n";
        } else {
            std::cout << "Division 1\n";
        }
    }

    return 0;
}
