#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    string str;
    cin >> n >> str;
    int i = 0, j = n - 1;
    while (j > i) {
        if (str[i] == 'W') {
            i += 1;
            n -= 1;
        }
        if (str[j] == 'W') {
            j -= 1;
            n -= 1;
        }
        if (str[i] == 'B' && str[j] == 'B') {
            break;
        }
    }
    cout << n << '\n';
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
