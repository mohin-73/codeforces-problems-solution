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

    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    int high = vec[0], h = 0;
    int low = vec[n - 1], l = n - 1;

    for (int i = 0; i < n; ++i) {
        if (vec[i] > high) {
            high = vec[i];
            h = i;
        }
        if (vec[i] <= low) {
            low = vec[i];
            l = i;
        }
    }

    int ans = h + (n - l - 1);

    if (h > l) {
        ans -= 1;
    }

    cout << ans << '\n';

    return 0;
}
