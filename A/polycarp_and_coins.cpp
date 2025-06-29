#include <iostream>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{};
        std::cin >> n;

        int a = n / 3;
        int b = n / 3;
        if (n % 3 == 1) ++a;
        if (n % 3 == 2) ++b;

        std::cout << a << " " << b << '\n';
    }

    return 0;
}
