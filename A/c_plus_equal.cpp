#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        long long a{}, b{}, n{}, ans{};
        std::cin >> a >> b >> n;

        while (a <= n && b <= n) {
            ++ans;
            if (a >= b) {
                b += a;
            } else {
                a += b;
            }
        }

        std::cout << ans << '\n';
    }

    return 0;
}
