#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        std::string str{};
        std::cin >> str;
        std::string cf = "codeforces";
        
        int cnt{};

        for (int i = 0; i < str.length(); ++i) {
            if (str[i] != cf[i]) {
                ++cnt;
            }
        }

        std::cout << cnt << '\n';
    }

    return 0;
}
