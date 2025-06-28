#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        std::string str{};
        std::cin >> str;

        for (int i = 0; i < str.length() - 1; ++i) {
            if (str[i] == str[i + 1]) {
                std::cout << 1 << '\n';
                goto next;
            }
        }

        std::cout << str.length() << '\n';
        next:;
    }

    return 0;
}
