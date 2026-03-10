#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m, a, b;
    cin >> n >> m;
    string s(m, 'B');
    for (int i = 0; i < n; ++i) {
        cin >> a;
        b = m - a--;
        int l = min(a, b);
        int r = max(a, b);
        s[l] == 'B' ? s[l] = 'A' : s[r] = 'A';
    }
    cout << s << '\n';
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
