#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, a;
    cin >> n;
    int s = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        s += a;
    }
    if (n == s) {
        cout << 0 << '\n';
    } else if (s < 0 || n > s) {
        cout << 1 << '\n';
    } else {
        cout << s - n << '\n';
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
