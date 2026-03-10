#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m, a, b;
    cin >> n >> m;
    string s(m, 'B');
    for (int i = 0; i < n; ++i) {
        cin >> a;
        b = m - a--;
        if (a < b && s[a] == 'B') {
            s[a] = 'A';
        } else if (b < a && s[b] == 'B') {
            s[b] = 'A';
        } else if (s[a] == 'B') {
            s[a] = 'A';
        } else {
            s[b] = 'A';
        }
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
