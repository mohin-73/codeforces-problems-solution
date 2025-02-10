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

    int low = arr[n - 1], high = arr[0];
    int l = n - 1, h = 0;

    for (int i = 0; i < n; i += 1) {
        if (arr[i] > high) {
            high = arr[i];
            h = i;
        }
        if (arr[i] <= low) {
            low = arr[i];
            l = i;
        }
    }
    
    int ans = h + n - l - 1;

    if (h > l) {
        ans -= 1;
    }

    cout << ans << '\n';

    return 0;
}
