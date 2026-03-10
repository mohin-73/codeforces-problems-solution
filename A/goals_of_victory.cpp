#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, a, s = 0;
    cin >> n;
    while (--n) {
        cin >> a;
        s += a;
    }
    cout << -s << '\n';
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
