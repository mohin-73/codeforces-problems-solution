#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    int mx = 0, curr = 0, a, b;

    for (int i = 1; i <= n; i += 1) {
        cin >> a >> b;
        curr -= a;
        curr += b;
        mx = max(mx, curr);
    }

    cout << mx << '\n';

    return 0;
}
