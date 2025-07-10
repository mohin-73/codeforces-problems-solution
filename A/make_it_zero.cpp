#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{}, arr[100];
    std::cin >> t;

    while (t--) {
        int n{};
        std::cin >> n;
    
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        if (n % 2) {
            std::cout << 4 << '\n';
            std::cout << 1 << " " << 2 << '\n';
            std::cout << 1 << " " << 2 << '\n';
            std::cout << 2 << " " << n << '\n';
            std::cout << 2 << " " << n << '\n';
            continue;
        }
        std::cout << 2 << '\n';
        std::cout << 1 << " " << n << '\n';
        std::cout << 1 << " " << n << '\n';
    }

    return 0;
}
