#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        long long a{}, b{}, k{}, p{};
        std::cin >> a >> b >> k;

        long long r = (k + 1) / 2;
        long long l = k - r;

        std::cout << a * r - b * l << '\n';
    }

    return 0;
}
