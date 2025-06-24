#include <iostream>
#include <set>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, num{};
        std::cin >> n;

        std::set<int> s;
        for (int i = 0; i < n; ++i) {
            std::cin >> num;
            s.insert(num);
        }
        
        std::cout << s.size() << '\n';
    }

    return 0;
}
