#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s{}, t{}, ans = "NO";
    std::cin >> s;

    for (int i = 0; i < 5; ++i) {
        std::cin >> t;
        if (t[0] == s[0] || t[1] == s[1]) {
            ans = "YES";
        }
    }

    std::cout << ans << '\n';

    return 0;
}
