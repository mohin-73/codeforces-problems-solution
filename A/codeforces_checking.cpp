#include <bits/stdc++.h>

using namespace std;

void solve() {
    string cf = "codeforces";
    char ch;
    cin >> ch;
    for (char c : cf) {
        if (c == ch) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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
