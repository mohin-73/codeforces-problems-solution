#include <bits/stdc++.h>

using namespace std;

int count(string str, int n, int k) {
    int time = 0, p = 0;
    while (k > 0) {
        k = str[p] == 'A' ? k - 1 : k / 2;
        time += 1; p += 1;
        if (p == n) {
            p = 0;
        }
    }
    return time;
}

void solve() {
    int n, q, k;
    string str;
    cin >> n >> q >> str;
    bool flag = false;
    if (str.find('B') == string::npos) {
        flag = true;
    }
    for (int i = 0; i < q; ++i) {
        cin >> k;
        if (flag == true) {
            cout << k << '\n';
        } else {
            cout << count(str, n, k) << '\n';
        }
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
