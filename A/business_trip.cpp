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

    int arr[12];
    for (int i = 0; i < 12; i += 1) {
        cin >> arr[i];
    }
    sort(arr, arr + 12, greater<int>());

    int x = 0;
    while (n > 0 and x < 12) {
        n = n - arr[x];
        x += 1;
    }
    
    if (n > 0) {
        cout << -1 << '\n';
    } else {
        cout << x << '\n';
    }

    return 0;
}
