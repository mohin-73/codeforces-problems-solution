#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;

    cin >> n;

    if (n == 0) {
        cout << 0 << ' ' << 0 << ' ' << 0 << '\n';
        return;
    }

    int f = 0, s = 1;

    while (f + s != n) {
        s = f + s;
        f = s - f;
    }

    cout << 0 << ' ' << f << ' ' << s << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
