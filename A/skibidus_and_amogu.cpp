#include <bits/stdc++.h>

using namespace std;

void solve() {
    string str, ans{};
    cin >> str;
    for (int i = 0; i < str.length() - 2; ++i) {
        ans += str[i];
    }
    cout << ans + "i\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
