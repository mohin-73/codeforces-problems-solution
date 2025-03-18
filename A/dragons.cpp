#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> vp;

    for (int i = 0; i < n; i += 1) {
        int a, b;
        cin >> a >> b;
        vp.push_back(make_pair(a, b));
    }

    sort(vp.begin(), vp.end());

    for (int i = 0; i < n; i += 1) {
        if (s <= vp[i].first) {
            cout << "NO\n";
            return 0;
        } else {
            s = s + vp[i].second;
        }
    }

    cout << "YES\n";

    return 0;
}
