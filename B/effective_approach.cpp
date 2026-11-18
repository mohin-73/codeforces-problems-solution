#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, x;

    cin >> n;

    vector<int> v(n + 1);

    for (int i = 1; i <= n; ++i) {
        cin >> x;
        v[x] = i;
    }

    int q;

    cin >> q;

    long long l = 0, r = 0;

    for (int i = 0; i < q; ++i) {
        cin >> x;
        l = l + v[x];
        r = r + n - v[x] + 1;
    }

    cout << l << ' ' << r << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
