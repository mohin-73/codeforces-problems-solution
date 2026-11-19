#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s, t;

    cin >> s >> t;

    reverse(begin(s), end(s));

    if (s == t) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
