#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, f, d;
    cin >> n >> f;
    while (--n) {
        cin >> d;
    }
    cout << (f == 1 ? "YES\n" : "NO\n");
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
