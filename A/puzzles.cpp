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

    int arr[m];

    for (int i = 0; i < m; i += 1) {
        cin >> arr[i];
    }

    sort(arr, arr + m);

    int mn = 10E8;

    for (int i = 0; i + n - 1 < m; i += 1) {
        int m = arr[i + n - 1] - arr[i];
        mn = min(mn, m);
    }

    cout << mn << '\n';

    return 0;
}
