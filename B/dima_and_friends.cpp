#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, x;

    cin >> n;

    int sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> x;
        sum += x;
    }

    int m = n + 1, ans = 0;

    for (int k = sum; k < sum + 5; ++k) {
        if (k % m != 0) {
            ++ans;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
