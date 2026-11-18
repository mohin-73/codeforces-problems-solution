#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;

    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int d = abs(v[0] - v[n - 1]);
    int a = 1, b = n;

    for (int i = 0; i + 1 < n; ++i) {
        if (abs(v[i] - v[i + 1]) < d) {
            d = abs(v[i] - v[i + 1]);
            a = i + 1, b = i + 2;
        }
    }

    cout << a << ' ' << b << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
