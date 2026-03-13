#include <bits/stdc++.h>

using namespace std;

void solve() {
    string cf = "codeforces";
    char ch;
    cin >> ch;
    if (find(cf.begin(), cf.end(), ch) != cf.end()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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
