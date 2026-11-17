#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, arr[1000];

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int mn = arr[0], mx = arr[0];
    int count = 0;

    for (int i = 1; i < n; ++i) {
        count += arr[i] > mx;
        count += arr[i] < mn;

        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }

    cout << count << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
