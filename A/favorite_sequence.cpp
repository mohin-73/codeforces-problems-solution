#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, arr[300];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    if (n == 1) {
        cout << arr[0] << '\n';
        return;
    }
    vector<int> ans;
    for (int i = 0; i <= n / 2; i += 1) {
        ans.push_back(arr[i]);
        if (i != n - i - 1)
            ans.push_back(arr[n - i - 1]);
    }
    for (int i = 0; i < n; ++i) {
        cout << ans[i] << ' ';
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
