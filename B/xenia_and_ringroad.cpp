#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;

    cin >> n >> m;

    long long time = 0;
    int x, curr = 1;

    for (int i = 0; i < m; ++i) {
        cin >> x;

        if (x >= curr) {
            time += x - curr;
        } else {
            time += n - curr + x;
        }

        curr = x;
    }

    cout << time << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
