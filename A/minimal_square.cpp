#include <iostream>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        long long a{}, b{};
        std::cin >> a >> b;
        
        if (b > a) std::swap(a, b);
        b = b * 2;
        a = std::max(a, b);

        std::cout << a * a << '\n';
    }

    return 0;
}
