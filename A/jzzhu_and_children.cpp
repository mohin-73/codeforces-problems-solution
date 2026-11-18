#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;

    cin >> n >> m;

    int arr[100];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        arr[i] = (arr[i] + m - 1) / m;
    }

    int mx = arr[0], p = 1;

    for (int i = 1; i < n; ++i) {
        if (arr[i] >= mx) {
            mx = arr[i];
            p = i + 1;
        }
    }

    cout << p << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
