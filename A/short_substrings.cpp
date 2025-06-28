#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        std::string str{};
        std::cin >> str;

        std::string org{};
        
        for (int i = 1; i < str.length(); i += 2) {
            org += str[i];
        }

        std::cout << str[0] << org << '\n';
    }

    return 0;
}
