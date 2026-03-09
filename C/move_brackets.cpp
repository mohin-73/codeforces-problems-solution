#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m = 0;
    string s;
    cin >> n >> s;
    stack<char> op;
    for (char c : s) {
        if (c == '(') op.push(c);
        else if (op.empty()) ++m;
        else op.pop();
    }
    cout << m << '\n';
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
