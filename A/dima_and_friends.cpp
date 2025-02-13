#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k, s = 0;
    cin >> n;
    
    for (int i = 0; i < n; i += 1) {
        cin >> k;
        s += k;
    }

    int ans = 0;

    for (int i = s + 1; i <= (s + 5); i += 1) {
        if ((i - 1) % (n + 1)) {
            ans += 1;
        }
    }

    cout << ans << '\n';
    
    return 0;
}
