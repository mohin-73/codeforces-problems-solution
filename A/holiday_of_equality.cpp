#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, x, mx = 0, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i += 1) {
        cin >> x;
        sum += x;
        mx = max(mx, x);
    }

    cout << (mx * n) - sum << '\n';
    
    return 0;
}
