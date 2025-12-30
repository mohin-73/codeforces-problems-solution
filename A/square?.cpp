#include <bits/stdc++.h>

using namespace std;

void solve() {
    int x;
    set<int> s;
    for (int i = 0; i < 4; ++i) {
        cin >> x;
        s.insert(x);
    }
    if (s.size() == 1) {
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
