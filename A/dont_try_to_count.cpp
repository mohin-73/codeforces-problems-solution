#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    for (char ch : s) {
        if (x.find(ch) == string::npos) {
            cout << -1 << '\n';
            return;
        }
    }
    for (int i = 0; i < m; ++i) {
        if (x.find(s) != string::npos) {
            cout << i << '\n';
            return;
        }
        x += x;
    }
    cout << -1 << '\n';
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
