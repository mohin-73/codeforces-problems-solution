#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        std::string str1{}, str2{};
        std::cin >> str1 >> str2;

        char a = str1[0], b = str2[0];
        str1[0] = b; str2[0] = a;
        
        std::cout << str1 << " " << str2 << '\n';
    }

    return 0;
}
