#include <iostream>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        char ch;
        std::string cf = "codeforces";
        std::cin >> ch;

        if (std::find(cf.begin(), cf.end(), ch) != cf.end()) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    
    return 0;
}
