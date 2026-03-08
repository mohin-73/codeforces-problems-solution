#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, arr[100];
    cin >> n;
    int t = 0, s = 0, cnt = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        t += arr[i];
    }
    sort(arr, arr + n);
    while (t >= s) {
        s += arr[--n];
        t -= arr[n];
        ++cnt;
    }
    cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
