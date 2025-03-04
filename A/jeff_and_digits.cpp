#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, x, f = 0, z = 0;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i += 1) {
        cin >> x;
        if (x) f += 1;
        else z += 1;
    }

    if (z) {
        f = f / 9;
        if (f == 0) {
            cout << 0 << '\n';
            return 0;
        }
        string nine_five = "555555555";
        string ans = "";
        while (f--) {
            ans += nine_five;
        }
        while (z--) {
            ans = ans + '0';
        }
        cout << ans << '\n';

    } else {
        cout << -1 << '\n';
    }
    
    return 0;
}
