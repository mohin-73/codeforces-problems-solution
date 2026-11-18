#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;

    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int mn = v[0], p = 1, k = 0;

    for (int i = 1; i < n; ++i) {
        if (mn > v[i]) {
            mn = v[i];
            p = i + 1;
            k = 0;
        } else if (mn == v[i]) {
            k = -1;
        }
    }

    if (k == -1) {
        cout << "Still Rozdil\n";
    } else {
        cout << p << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
