#include <bits/stdc++.h>

using namespace std;

void solve() {
    int x, y;
    cin >> x;
    y = x;
    while (x > 0) {
        y = min(y, x % 10);
        x /= 10;
    }
    cout << y << '\n';
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
