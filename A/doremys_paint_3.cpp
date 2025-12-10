#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, arr[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int a = 0, b = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == arr[0]) {
            ++a;
        }
        if (arr[i] == arr[n - 1]) {
            ++b;
        }
        if (arr[i] != arr[0] && arr[i] != arr[n - 1]) {
            cout << "No\n";
            return;
        }
    }
    if (abs(a - b) < 2) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
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
