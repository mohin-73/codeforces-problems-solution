#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int p = 0;
    while (n > 1) {
        ++p;
        n >>= 1;
    }
    cout << (1 << p) - 1 << '\n';
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
