#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int a{}, b{}, c{};
        std::cin >> a >> b >> c;

        if (c > b && b > a) {
            std::cout << "STAIR\n";
        } else if (b > a && b > c) {
            std::cout << "PEAK\n";
        } else {
            std::cout << "NONE\n";
        }
    }

    return 0;
}
