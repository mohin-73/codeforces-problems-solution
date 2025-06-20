#include <iostream>
#include <climits>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{};
        std::cin >> n;

        int num{}, mnp{}, mxp{};
        int mx = INT_MIN, mn = INT_MAX;

        for (int i = 0; i < n; ++i) {
            std::cin >> num;
            if (num > mx) {
                mx = num;
                mxp = i + 1;
            }
            if (num < mn) {
                mn = num;
                mnp = i + 1;
            }
        }

        int ans = std::max(mnp, mxp);
        ans = std::min(ans, n - std::min(mnp, mxp) + 1);
        int k = std::min(mnp, n - mnp + 1);
        k = k + std::min(mxp, n - mxp + 1);
        ans = std::min(ans, k);

        std::cout << ans << '\n';
    }

    return 0;
}
