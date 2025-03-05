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

    int arr[n];
    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    int ans = 0;

    for (int i = 0; i < m; i += 1) {
        if (arr[i] < 0) {
            ans += arr[i];
        } else {
            break;
        }
    }

    cout << abs(ans) << '\n';

    return 0;
}
