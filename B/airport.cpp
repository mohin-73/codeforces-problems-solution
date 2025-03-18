#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;

    multiset<int> ms1;
    multiset<int> ms2;

    for (int i = 0; i < m; i += 1) {
        int x;
        cin >> x;
        ms1.insert(x);
        ms2.insert(x);
    }

    int mn = 0, mx = 0;

    for (int i = 0; i < n; i += 1) {
        auto it = ms1.begin();
        mn = mn + *it;
        int k = *it - 1;
        ms1.erase(ms1.begin());
        if (k) {
            ms1.insert(k);
        }
    }

    for (int i = 0; i < n; i += 1) {
        auto it = ms2.rbegin();
        mx = mx + *it;
        int k = *it - 1;
        ms2.erase(next(it).base());
        if (k) {
            ms2.insert(k);
        }
    }
    
    cout << mx << ' ' << mn << '\n';

    return 0;
}
