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

    int l = 1, r = n;
    int mn = abs(arr[n - 1] - arr[0]);

    for (int i = 1; i < n; i += 1) {
        int k = abs(arr[i] - arr[i - 1]);
        if (k < mn) {
            l = i;
            r = l + 1;
            mn = k;
        }
    }

    cout << l << ' ' << r << '\n';
    
    return 0;
}
