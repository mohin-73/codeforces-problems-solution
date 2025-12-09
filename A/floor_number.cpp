#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    if (n <= 2) {
        cout << 1 << '\n';
        return;
    }
    n -= 2;
    cout << 1 + ((n + x - 1) / x) << '\n';
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
