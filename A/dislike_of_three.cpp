#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::vector<int> v;
    int a = 1000, i = 1;

    while (a) {
        if (i % 3 != 0 && i % 10 != 3) {
            v.push_back(i);
            --a;
        }
        ++i;
    }

    int t{};
    std::cin >> t;

    while (t--) {
        int n{};
        std::cin >> n;
        std::cout << v[n - 1] << '\n';
    }
    
    return 0;
}
