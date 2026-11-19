#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;

    cin >> n;

    int mx = 0;
    string team, winner;
    unordered_map<string, int> mp;

    for (int i = 0; i < n; ++i) {
        cin >> team;
        if (++mp[team] > mx) {
            mx = mp[team];
            winner = team;
        }
    }

    cout << winner << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
