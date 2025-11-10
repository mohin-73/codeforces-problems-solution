#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> v1(n);
    vector<string> v2(n);
    vector<string> v3(n);
    map<string, int> mp;
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
        mp[v1[i]] += 1;
    }
    for (int i = 0; i < n; ++i) {
        cin >> v2[i];
        mp[v2[i]] += 1;
    }
    for (int i = 0; i < n; ++i) {
        cin >> v3[i];
        mp[v3[i]] += 1;
        if (mp[v3[i]] == 1) {
            c += 3;
        } else if (mp[v3[i]] == 2) {
            c += 1;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (mp[v1[i]] == 1) {
            a += 3;
        } else if (mp[v1[i]] == 2) {
            a += 1;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (mp[v2[i]] == 1) {
            b += 3;
        } else if (mp[v2[i]] == 2) {
            b += 1;
        }
    }
    cout << a << ' ' << b << ' ' << c << '\n';
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
