#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;

    cin >> n;

    int mn = INT_MAX, mx = INT_MIN;
    int mnc = 0, mxc = 0, x;
    map<int, int> mp;

    for (int i = 0; i < n; ++i) {
        cin >> x;

        ++mp[x];

        if (x < mn) {
            mn = x;
        }

        if (x > mx) {
            mx = x;
        }
    }

    mnc = mp[mn];
    mxc = mp[mx];

    if (mn == mx) {
        long long m = mnc - 1;
        cout << 0 << ' ' << (m * (m + 1)) / 2 << '\n';
    } else {
        cout << mx - mn << ' ' << 1LL * mnc * mxc << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
 
    return 0;
}
