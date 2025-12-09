#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a1, b1, a2, b2, a3, b3, a4, b4;
    cin >> a1 >> b1 >> a2 >> b2;
    cin >> a3 >> b3 >> a4 >> b4;
    int x = max(abs(b1 - b2), abs(b3 - b4));
    x = max(x, max(abs(b1 - b3), abs(b2 - b4)));
    x = max(x, max(abs(b1 - b4), abs(b3 - b2)));
    cout << x * x << '\n';
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
