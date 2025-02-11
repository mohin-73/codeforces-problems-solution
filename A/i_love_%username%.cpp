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
    int arr[n];

    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
    }

    int ans = 0, mx = arr[0], mn = arr[0];
    
    for (int i = 1; i < n; i += 1) {
        if (mx < arr[i]) {
            ans += 1;
            mx = arr[i];
        } else if (mn > arr[i]) {
            ans += 1;
            mn = arr[i];
        }
    }

    cout << ans << '\n';

    return 0;
}
