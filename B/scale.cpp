#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        int n, k;
        std::cin >> n >> k;

        std::string grid[1001];
        for (int i = 0; i < n; ++i) {
            std::cin >> grid[i];
        }

        int m = n / k;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < m; ++j) {
                std::cout << grid[i * k][j * k];
            }
            std::cout << '\n';
        }
    }

    return 0;
}
