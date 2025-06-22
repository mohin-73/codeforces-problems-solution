#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{}, m{};
    std::cin >> n >> m;

    char color;
    bool flag = true;
    for (int i = 0; i < n * m; ++i) {
        std::cin >> color;
        if (color == 'C' || color == 'M' || color == 'Y') {
            flag = false;
        }
    }

    if (flag) {
        std::cout << "#Black&White\n";
    } else {
        std::cout << "#Color\n";
    }

    return 0;
}
