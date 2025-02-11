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
    cin >> n;
    int a0 = 0, a1 = 0 , b0 = 0, b1 = 0;

    for (int i = 1; i <= n; i += 1) {
        cin >> a >> b;
        if (a) {
            a1 += 1;
        } else {
            a0 += 1;
        }
        if (b) {
            b1 += 1;
        } else {
            b0 += 1;
        }
    }

    int x = min(a0, a1);
    int y = min(b0, b1);
    cout << x + y << '\n';

    return 0;
}
