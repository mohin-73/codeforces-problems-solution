#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    
    cin >> n;

    vector<int> v1(n);

    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }

    cin >> m;

    vector<int> v2(m);

    for (int i = 0; i < m; ++i) {
        cin >> v2[i];
    }
    
    int mx = 0, count = 0;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (v2[j] % v1[i] == 0) {
                int r = v2[j] / v1[i];
                ++mp[r];

                if (r >= mx) {
                    mx = r;
                    count = mp[r];
                }
            }
        }
    }

    cout << count << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
