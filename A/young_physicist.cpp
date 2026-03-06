#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, x, y, z, fx, fy, fz;
    x = y = z = 0;
    cin >> n;
    while (n--) {
        cin >> fx >> fy >> fz;
        x += fx; y += fy; z += fz;
    }
    cout << (x || y || z ? "NO\n" : "YES\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}