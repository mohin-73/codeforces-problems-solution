#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        std::string str{};
        std::cin >> str;

        int len = static_cast<int>(str.length());

        if (len % 2) {
            std::cout << "NO\n";
            continue;
        }

        std::string s1{}, s2{};

        for (int i = 0; i < len / 2; ++i) {
            s1 += str[i];
        }
        
        for (int i = len / 2; i < len; ++i) {
            s2 += str[i];
        }

        if (s1 == s2) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}
