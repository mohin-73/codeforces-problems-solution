#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int x, sum = 0, neg = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        sum += x;
        neg += (x == -1);
    }
    int ans = 0;
    if (sum < 0) {
        ans = (-sum + 1) / 2;
        sum += ans * 2;
        neg -= ans;
    }
    if (neg & 1) ++ans;
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
