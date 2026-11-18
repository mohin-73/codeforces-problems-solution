#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    nl = (l * k) / nl;
    np = p / np;

    d = min({c * d, nl, np});

    cout << d / n << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
