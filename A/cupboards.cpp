#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, l, r;

    cin >> n;

    int l1 = 0, l2 = 0;
    int r1 = 0, r2 = 0;

    for (int i = 0; i < n; ++i) {
        cin >> l >> r;
        
        l1 += l == 0;
        l2 += l == 1;
        r1 += r == 0;
        r2 += r == 1;
    }

    cout << min(l1, l2) + min(r1, r2) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
