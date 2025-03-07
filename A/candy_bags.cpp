#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k = 1, m = 1;
    cin >> n;

    int arr[n + 1][2 * n + 1];

    for (int i = 1; i <= n; i += 1) {
        for (int j = 1; j <= n; j += 1) {
            arr[i][j] = k;
            k += 1;
        }
        for (int j = n + 1; j <= 2 * n; j += 1) {
            arr[i][j] = m;
            m += 1;
        }
    }
    
    for (int i = 1; i <= n; i += 1) {
        for (int j = 1; j <= n; j += 1) {
            cout << arr[j][j + i - 1] << (j == n ? "" : " ");
        }
        cout << '\n';
    }

    return 0;
}