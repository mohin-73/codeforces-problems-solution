#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<pair<int, int>> vp(n);

    for (int i = 0; i < n; ++i) {
        cin >> vp[i].first >> vp[i].second;
    }

    sort(vp.begin(), vp.end());

    int a = 0, g = 0;
    string res;

    for (int i = 0; i < n; ++i) {
        if (a + vp[i].first - g <= 500) {
            a += vp[i].first;
            res.push_back('A');
        } else {
            g += vp[i].second;
            res.push_back('G');
        }
    }

    if (abs(a - g) > 500) {
        cout << -1 << '\n';
        return;
    }

    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
