#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, a;
    cin >> n >> a;
    int v, x, y, l = 0, r = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v;
        if (v == a) {
            continue;
        }
        x = abs(v - a - 1);
        y = abs(v - a + 1);
        x > y ? ++l : ++r;
    }
    cout << (l > r ? --a : ++a) << '\n';
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
