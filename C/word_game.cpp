#include <iostream>
#include <vector>
#include <map>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{};
        std::cin >> n;

        std::vector<std::string> v1(n);
        std::vector<std::string> v2(n);
        std::vector<std::string> v3(n);
        std::map<std::string, int> mp;

        int a{}, b{}, c{};

        for (int i = 0; i < n; ++i) {
            std::cin >> v1[i];
            ++mp[v1[i]];
        }
        
        for (int i = 0; i < n; ++i) {
            std::cin >> v2[i];
            ++mp[v2[i]];
        }

        for (int i = 0; i < n; ++i) {
            std::cin >> v3[i];
            ++mp[v3[i]];
            if (mp[v3[i]] == 1) c += 3;
            else if (mp[v3[i]] == 2) c += 1;
        }

        for (int i = 0; i < n; ++i) {
            if (mp[v1[i]] == 1) a += 3;
            else if (mp[v1[i]] == 2) a += 1;
        }

        for (int i = 0; i < n; ++i) {
            if (mp[v2[i]] == 1) b += 3;
            else if (mp[v2[i]] == 2) b += 1;
        }

        std::cout << a << " " << b << " " << c << '\n';
    }

    return 0;
}
