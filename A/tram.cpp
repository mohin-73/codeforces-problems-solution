#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, a, b;

    cin >> n;

    int curr = 0, cap = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;

        curr += b - a;
        cap = max(cap, curr);
    }

    cout << cap << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
