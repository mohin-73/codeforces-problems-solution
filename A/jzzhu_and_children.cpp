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
        arr[i] = (arr[i] + m - 1) / m;
    }

    int ans = 1, mx = arr[0];

    for (int i = 0; i < n; i += 1) {
        if (arr[i] >= mx) {
            mx = arr[i];
            ans = i + 1;
        }
    }

    cout << ans << '\n';
    
    return 0;
}
