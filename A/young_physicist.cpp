#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, a, b, c;
    int x = 0, y = 0, z = 0;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a >> b >> c;

        x += a;
        y += b;
        z += c;
    }

    if (x == 0 && y == 0 && z == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
