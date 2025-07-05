#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        long long a{}, b{}, c{}, n{};
        std::cin >> a >> b >> c >> n;

        long long sum = n + a + b + c;
        long long k = sum / 3;

        if (sum % 3 || k < a || k < b || k < c) {
            std::cout << "NO\n";
        } else {

            std::cout << "YES\n";
        }
    }

    return 0;
}
