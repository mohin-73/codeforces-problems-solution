#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, arr[100];

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int mnp = 0, mn = arr[0];
    int mxp = 0, mx = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > mx) {
            mx = arr[i];
            mxp = i;
        }

        if (arr[i] <= mn) {
            mn = arr[i];
            mnp = i;
        }
    }

    if (mxp > mnp) {
        ++mnp;
    }

    cout << n - 1 - mnp + mxp << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
