#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, arr[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << arr[0] << '\n';
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
