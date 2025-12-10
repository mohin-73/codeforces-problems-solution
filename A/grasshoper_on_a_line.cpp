#include <bits/stdc++.h>

using namespace std;

void solve() {
    int x, k;
    cin >> x >> k;
    if (x % k) {
        cout << 1 << '\n' << x << '\n';
    } else {
        cout << 2 << '\n' << x - k - 1  << ' ' << k + 1 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
