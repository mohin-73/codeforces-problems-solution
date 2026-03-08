#include <bits/stdc++.h>

using namespace std;

void solve() {
    int v, m;
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            cin >> v;
            if (v == 1) {
                m = abs(i - 3) + abs(j - 3);
            }
        }
    }
    cout << m << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
