#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;

    int k = n + m, x = min(n, m), cnt = 0;

    for (int i = 0; i <= x; i += 1) {
        for (int j = 0; j <= x; j += 1) {
            int a = i * i + j;
            int b = j * j + i;
            if (a == n and b == m) {
                cnt += 1;
            }
        }
    }

    cout << cnt << '\n';

    return 0;
}
