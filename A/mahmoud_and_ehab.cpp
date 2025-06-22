#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{};
    std::cin >> n;

    if (n % 2 == 1) {
        std::cout << "Ehab\n";
    } else {
        std::cout << "Mahmoud\n";
    }

    return 0;
}
