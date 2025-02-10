#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    bool arr[d + 1];
    memset(arr, false, sizeof(arr));

    for (int i = k; i <= d; i += k) {
        arr[i] = true;
    }
    for (int i = l; i <= d; i += l) {
        arr[i] = true;
    }
    for (int i = m; i <= d; i += m) {
        arr[i] = true;
    }
    for (int i = n; i <= d; i += n) {
        arr[i] = true;
    }

    int ans = 0;
    for (int i = 1; i <= d; i += 1) {
        ans += arr[i];
    }

    cout << ans << '\n';

    return 0;
}
