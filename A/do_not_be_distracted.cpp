#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    string str;
    cin >> n >> str;
    bool flag[26] = {false};
    for (int i = 0; i < n; ++i) {
        if (flag[str[i] - 65]) {
            cout << "NO\n";
            return;
        } else if (i > 0 && str[i] != str[i - 1]) {
            flag[str[i - 1] - 65] = true;
        }
    }
    cout << "YES\n";
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
