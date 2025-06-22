#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int s1{}, s2{}, s3{}, s4{};
        std::cin >> s1 >> s2 >> s3 >> s4;

        int a = std::max(s1, s2);
        int b = std::max(s3, s4);

        if (a >= std::min(s3, s4) && b >= std::min(s1, s2)) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}
