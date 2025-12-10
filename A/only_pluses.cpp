#include <bits/stdc++.h>

using namespace std;

void solve() {
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    for (int i = 0; i < 5; ++i) {
        sort(arr, arr + 3);
        arr[0] += 1;
    }
    cout << arr[0] * arr[1] * arr[2] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
