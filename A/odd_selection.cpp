#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, x, num;
    int odd = 0, even = 0;
    cin >> n >> x;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        num % 2 ? ++odd : ++even;
    } 
    if (odd == 0 || (x % 2 == 0 && even == 0)) {
        cout << "No\n";
    } else if (odd % 2 == 0 && x == n) {
        cout << "No\n";
    } else {
        cout << "Yes\n";
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
