#include <bits/stdc++.h>

using namespace std;

void solve() {
    int s, n;

    cin >> s >> n;

    vector<pair<int, int>> vp(n);

    for (int i = 0; i < n; ++i) {
        cin >> vp[i].first >> vp[i].second;
    }

    sort(begin(vp), end(vp));

    for (int i = 0; i < n; ++i) {
        if (vp[i].first >= s) {
            cout << "NO\n";
            return;
        }

        s += vp[i].second;
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
