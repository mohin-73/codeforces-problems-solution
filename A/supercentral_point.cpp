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
    int x[200], y[200];

    for (int i = 0; i < n; i += 1) {
        cin >> x[i] >> y[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i += 1) {
        int xi = x[i], yi = y[i];
        int a = 0, b = 0, c = 0, d = 0;
        for (int j = 0; j < n; j += 1) {
            if (j != i) {
                if (x[j] == xi and y[j] > yi) {
                    a = 1;
                }
                if (x[j] == xi and y[j] < yi) {
                    b = 1;
                }
                if (y[j] == yi and x[j] > xi) {
                    c = 1;
                }
                if (y[j] == yi and x[j] < xi) {
                    d = 1;
                }
            }
        }
        if (a + b + c + d == 4) {
            ans += 1;
        }
    }

    cout << ans << '\n';
    
    return 0;
}
