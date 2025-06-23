#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int a{}, x{}, y{};
        std::cin >> a >> x >> y;

        for (int i = 1; i <= std::max(x, y); ++i) {
            if (a != i) {
                int d1 = abs(a - x);
                int d2 = abs(i - x);
                if (d1 <= d2) {
                    continue;
                }
                d1 = abs(a - y);
                d2 = abs(i - y);
                if(d1 > d2) {
                    std::cout << "YES\n";
                    goto next;
                }
            }
        }

        std::cout << "NO\n";
        next:;
    }

    return 0;
}
