#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, two = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        two += a[i] == 2;
    }
    if (two % 2) {
        cout << -1 << '\n';
        return;
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        cnt += (a[i] == 2);
        if (cnt * 2 == two) {
            cout << i + 1 << '\n';
            break;
        }
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
