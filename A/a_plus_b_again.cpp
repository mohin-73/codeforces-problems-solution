#include <bits/stdc++.h>

using namespace std;

void solve() {
    short n;
    cin >> n;
    cout << n % 10 + n / 10 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    short t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
