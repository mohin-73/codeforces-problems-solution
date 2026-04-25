#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if (a > b) {
        if (a - b > 1 || a % 2 == 0) {
            cout << -1 << '\n';
        } else {
            cout << y << '\n';
        }
        return;
    }
    if (y < x && b > a) {
        int even = (b - a) / 2;
        int odd = even;
        if (a % 2 == 0 && (b - 1) % 2 == 0) {
            ++even;
        } else if (a % 2  && (b - 1) % 2) {
            ++odd;
        }
        cout << even * y + odd * x << '\n';
    } else {
        cout << (b - a) * x << '\n';
    }
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
