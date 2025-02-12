#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, a, b, c, ans = 0;
    cin >> n;

    while (n--) {
        cin >> a >> b >> c;
        ans += ((a + b + c) >= 2);
    }

    cout << ans << '\n';
    
    return 0;
}
