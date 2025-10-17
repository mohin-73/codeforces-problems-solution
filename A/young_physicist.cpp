#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int a = 0, b = 0, c = 0;

    for (int i = 0; i < n; i++) {
        int x, y, z;
        std::cin >> x >> y >> z;
        a += x;
        b += y;
        c += z;
    }

    if (a == 0 && b == 0 && c == 0) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}
