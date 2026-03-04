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
    odd -= !(odd % 2);
    if (odd >= 1 && odd + even >= x) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
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
