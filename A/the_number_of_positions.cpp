#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, a, b;
    cin >> n >> a >> b;

    int ans = n - a;
    int k = a + 1;

    if (k + b < n) {
        k = n - k - b;
        ans = ans - k;
    }

    cout << ans << '\n';

    return 0;
}
