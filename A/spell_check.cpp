#include <iostream>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{};
        std::cin >> n;

        std::string str{}, t = "Timur";
        std::cin >> str;

        sort(str.begin(), str.end());
        sort(t.begin(), t.end());

        if (str == t) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}
