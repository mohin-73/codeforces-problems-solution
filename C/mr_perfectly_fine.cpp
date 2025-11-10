#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m, v, a, b, c;
    a = b = c = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m >> v;
        a = v == 1 ? min(a, m) : a;
        b = v == 10 ? min(b, m) : b;
        c = v == 11 ? min(c, m) : c;
    }
    if (c == INT_MAX && (a == INT_MAX || b == INT_MAX)) {
        cout << -1 << '\n';
    } else if (c == INT_MAX) {
        cout << a + b << '\n';
    } else if (a == INT_MAX || b == INT_MAX) {
        cout << c << '\n';
    } else {
        cout << min(a + b, c) << '\n';
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
