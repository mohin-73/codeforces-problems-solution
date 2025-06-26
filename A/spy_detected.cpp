#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{};
        std::cin >> n;

        std::vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> v[i];
        }

        for (int i = 0; i < n - 2; ++i) {
            if (v[i] == v[i + 1] && v[i] != v[i + 2]) {
                std::cout << i + 3 << '\n';
                break;
            } else if (v[i] == v[i + 2] && v[i] != v[i + 1]) {
                std::cout << i + 2 << '\n';
                break;
            } else if (v[i + 1] == v[i + 2] && v[i] != v[i + 1]) {
                std::cout << i + 1 << '\n';
                break;
            }   
        }
    }
    
    return 0;
}
