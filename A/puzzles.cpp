#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;

    cin >> n >> m;

    vector<int> v(m);

    for (int i = 0; i < m; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int diff = INT_MAX;

    for (int i = n - 1; i < m; ++i) {
        diff = min(diff, v[i] - v[i - n + 1]);
    }

    cout << diff << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
