#include <bits/stdc++.h>

using namespace std;

void solve() {
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 == x2 && y1 != y2) {
        int k = abs(y1 - y2);
        cout << x1 + k << ' ' << y1 << ' ' << x2 + k << ' ' << y2 << '\n';
    } else if (y1 == y2 && x1 != x2) {
        int k = abs(x1 - x2);
        cout << x1 << ' ' << y1 + k << ' ' << x2 << ' ' << y2 + k << '\n';
    } else if (abs(x1 - x2) != 0 && abs(x1 - x2) == abs(y1 - y2)) {
        cout << x1 << ' ' << y2 << ' ' << x2 << ' ' << y1 << '\n';
    } else {
        cout << -1 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
 
    return 0;
}
