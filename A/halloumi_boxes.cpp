#include <iostream>
#include <vector>

bool isSorted(std::vector<int>& v, int n) {
    for (int i = 1; i < n; ++i) {
        if (v[i] < v[i - 1]) return false;
    }
    return true;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, k{};
        std::cin >> n >> k;

        std::vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> v[i];
        }

        bool flag = isSorted(v, n);

        if (flag || k > 1) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}
