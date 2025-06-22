#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{}, m{}, c{};
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int x{}, y{};
        std::cin >> x >> y;

        if(x > y) {
            ++m;
        } else if (x < y) {
            ++c;
        }
    }

    if (m > c) {
        std::cout << "Mishka\n";
    } else if (m < c) {
        std::cout << "Chris\n";
    } else {
        std::cout << "Friendship is magic!^^\n";
    }

    return 0;
}
