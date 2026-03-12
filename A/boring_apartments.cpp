#include <bits/stdc++.h>

using namespace std;

void solve() {
    int x;
    cin >> x;
    int p = (x % 10 - 1) * 10;
    int d = to_string(x).length();
    p += (d * (d + 1)) / 2;
    cout << p << '\n';
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
