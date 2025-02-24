#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long n, k;
    cin >> n >> k;

    long long x = (n + 1) / 2;

    if (x >= k) {
        cout << 2 * k - 1 << '\n';
    } else {
        x = k - x;
        cout << x * 2 << '\n';
    }

    return 0;
}
