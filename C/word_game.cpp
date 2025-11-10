#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<vector<string>> v(3, vector<string>(n));
    map<string, int> mp;
    for (auto& x : v) {
        for (auto& s : x) {
            cin >> s;
            mp[s] += 1;
        }
    }
    for (int i = 0; i < 3; ++i) {
        int score = 0;
        for (auto& s : v[i]) {
            score += (mp[s] == 1 ? 3 : mp[s] == 2 ? 1 : 0);
        }
        cout << score << " \n"[i == 2];
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
