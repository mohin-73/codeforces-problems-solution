#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        ans += (s[0] == '+' || s[2] == '+') ? 1 : -1;
    }
    cout << ans << '\n';
    return 0;
}
