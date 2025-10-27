#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        ans += (a + b + c > 1 ? 1 : 0);
    }
    cout << ans << '\n';
    return 0;
}
