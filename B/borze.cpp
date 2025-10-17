#include <iostream>
#include <string>

int main() {
    std::string str{}, ans{};
    std::cin >> str;

    size_t len = str.length();

    for (size_t i = 0; i < len; i++) {
        if (str[i] == '.') {
            ans += '0';
        } else if (str[i + 1] == '-') {
            ans += '2';
            i += 1;
        } else {
            ans += '1';
            i += 1;
        }
    }

    std::cout << ans << '\n';

    return 0;
}
