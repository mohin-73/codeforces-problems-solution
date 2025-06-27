#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{};
        std::cin >> n;

        if ((n - 1) % 3 == 0 || (n + 1) % 3 == 0) {
            std::cout << "First\n";
        } else {
            std::cout << "Second\n";
        }
    }
    
    return 0;
}
