#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s, t;

    cin >> s >> t;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);

    if (s == t) {
        cout << 0 << '\n';
    } else if (s > t) {
        cout << 1 << '\n';
    } else {
        cout << -1 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
