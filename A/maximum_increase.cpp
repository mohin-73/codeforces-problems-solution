#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{}, ans = 1;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }

    int cnt = 1;

    for (int i = 1; i < n; ++i) {
        if (v[i] > v[i - 1]) {
            cnt += 1;
            ans = std::max(ans, cnt);
        } else {
            cnt = 1;
        }
    }

    std::cout << ans << '\n';

    return 0;
}
