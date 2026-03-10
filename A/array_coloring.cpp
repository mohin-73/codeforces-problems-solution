#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, a, s = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        s += a;
    }
    if (s % 2 == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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
