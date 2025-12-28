#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, x;
    cin >> n;
    int odd = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        odd += x % 2;
    }
    if (odd == 0 || (odd == n && !(n % 2))) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
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
