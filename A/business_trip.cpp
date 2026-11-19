#include <bits/stdc++.h>

using namespace std;

void solve() {
    int k;

    cin >> k;

    vector<int> v(12);

    for (int i = 0; i < 12; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    int i = 0;

    while (i < 12 && k > 0) {
        k -= v[i++];
    }

    if (k > 0) {
        cout << -1 << '\n';
    } else {
        cout << i << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
